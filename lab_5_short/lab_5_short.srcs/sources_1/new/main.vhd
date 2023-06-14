library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity main is
    Port ( switch_reg : in STD_LOGIC_VECTOR (3 downto 0);
                clk_100M, reset : in std_logic;
           led_reg : out STD_LOGIC_VECTOR (3 downto 0));
end main;
architecture Behavioral of main is

component in_reg is
generic(n: positive := 2);
port( in_port : in std_logic_vector (n-1 downto 0);
        clk_100M , EN: in std_logic;
      out_port : out std_logic_vector (n-1 downto 0));
end component;

component out_reg is
generic(n: positive := 2);
port (clk: in std_logic;
        en: in std_logic;
		d: in std_logic_vector (n-1 downto 0);
		q: out std_logic_vector (n-1 downto 0));
end component;


component lab5_short
Port (      address : in std_logic_vector(11 downto 0);
            instruction : out std_logic_vector(17 downto 0);
                 enable : in std_logic;
                    clk : in std_logic);
end component;

component kcpsm6
  generic(                 hwbuild : std_logic_vector(7 downto 0) := X"00";
                  interrupt_vector : std_logic_vector(11 downto 0) := X"3FF";
           scratch_pad_memory_size : integer := 64);
  port (                   address : out std_logic_vector(11 downto 0);
                       instruction : in std_logic_vector(17 downto 0);
                       bram_enable : out std_logic;
                           in_port : in std_logic_vector(7 downto 0);
                          out_port : out std_logic_vector(7 downto 0);
                           port_id : out std_logic_vector(7 downto 0);
                      write_strobe : out std_logic;
                    k_write_strobe : out std_logic;
                       read_strobe : out std_logic;
                         interrupt : in std_logic;
                     interrupt_ack : out std_logic;
                             sleep : in std_logic;
                             reset : in std_logic;
                               clk : in std_logic);
end component;

signal leds, out_reg_in, d_kpsm_in_port : STD_LOGIC_VECTOR (7 downto 0);
signal extra_4_bit : STD_LOGIC_VECTOR (3 downto 0);
signal clk, rst, EN, choose_in, choose_out  : std_logic;

--signals from the processor
signal address : std_logic_vector(11 downto 0) ;
signal instruction : std_logic_vector (17 downto 0);
signal  port_id : std_logic_vector (7 downto 0);
signal  out_port :std_logic_vector (7 downto 0);
signal kpsm_in_port : std_logic_vector (7 downto 0);
signal write_strobe_d : std_logic  ;
signal read_strobe : std_logic  ;
signal interrupt : std_logic  ;
signal interrupt_ack : std_logic  ;
signal bram_enable,k_write_strobe: std_logic;


begin

switches_reg: in_reg generic map(n => 8)  -- 8 bit register
port map (clk_100M => clk_100M,
         en => '1',
         in_port (7 downto 4) => "0000", 
         in_port (3 downto 0) => switch_reg,
		 out_port => d_kpsm_in_port);
		 
leds_reg: out_reg generic map(n => 8)  -- 8 bit register
port map (clk => clk_100M,
         en => choose_out, 
         d => out_reg_in,
		 q => leds);

        
program_rom: lab5_short Port map (     address => address,
         instruction => instruction,
              enable => bram_enable,                             
                 clk => clk_100M);

processor: kcpsm6  port map(
                   address => address,
                     instruction => instruction,
                     bram_enable => bram_enable,
                         in_port => d_kpsm_in_port,
                        out_port => out_reg_in,
                         port_id => port_id,
                    write_strobe => write_strobe_d,
                  k_write_strobe => k_write_strobe,
                     read_strobe => read_strobe,
                       interrupt => '0',
                   interrupt_ack => interrupt_ack,
                           sleep => '0',
                           reset => reset,
                             clk => clk_100M);

led_reg <= leds (3 downto 0);

interrupt <= '0';  -- no interupt

kpsm_in_port <= x"00"; -- For simulation it is important to not leave inputs open since simulator will read garbage and cause problems for KCPSM6
 

process(write_strobe_d) -- we dont put port_id because we are only interested to look at port_id when write_strobe_d ='1'
begin

if (write_strobe_d ='1') then
        choose_out <= '1';
else
        choose_out <= '0';
end if;
end process;

process(read_strobe) 
begin

if (read_strobe ='1') then
        choose_in <= '1';
else
        choose_in <= '0';
end if;

end process;



end Behavioral;
