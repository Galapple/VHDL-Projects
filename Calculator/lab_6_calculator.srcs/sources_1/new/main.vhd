library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity main is
port(A: in std_logic_vector (3 downto 0);
     clk100: in std_logic;
     cntr_rst: in std_logic;
     RESET: in std_logic_vector(0 downto 0);
     ENTER: in std_logic_vector(0 downto 0);
     MULA: in std_logic_vector(0 downto 0);
     DIVA: in std_logic_vector(0 downto 0);
     Y: out std_logic_vector( 7 downto 0));
end main;

architecture Behavioral of main is

component lab_6_short
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

component reg
generic(n: positive := 1);
    Port ( d : in STD_LOGIC_VECTOR (n-1 downto 0);
           clk,en : in std_logic;
           q : out STD_LOGIC_VECTOR (n-1 downto 0));
end component;

--Signals for the micro-controller
signal address: std_logic_vector(11 downto 0);
signal instruction: std_logic_vector(17 downto 0);
signal port_id: std_logic_vector (7 downto 0);
signal out_port: std_logic_vector (7 downto 0);
signal in_port: std_logic_vector (7 downto 0);
signal write_strobe: std_logic;
signal read_strobe: std_logic;
signal interrupt: std_logic;
signal interrupt_ack: std_logic;
signal bram_enable,k_write_strobe: std_logic;

--Signals for reg
signal A_enable: std_logic;
signal RESET_enable: std_logic;
signal ENTER_enable: std_logic;
signal MULA_enable: std_logic;
signal DIVA_enable: std_logic;
signal Y_enable: std_logic;

signal y_sig: std_logic_vector(7 downto 0);

begin


processor: kcpsm6 port map(
            address=>address,
            instruction=>instruction,
            bram_enable=>bram_enable,
            in_port=>in_port,
            out_port=>out_port,
            port_id=>port_id,
            write_strobe=>write_strobe,
            k_write_strobe=>k_write_strobe,
            read_strobe=>read_strobe,
            interrupt=>'0',
            interrupt_ack=>interrupt_ack,
            sleep=>'0',
            reset=>cntr_rst,
            clk=>clk100);

program_rom: lab_6_short port map(
             address=>address,
             instruction=>instruction,
             enable=>bram_enable,
             clk=>clk100); 

RESET_reg : entity work.reg(Behavioral_reg_input) generic map (n=>1) port map(d => RESET, clk => clk100, en => RESET_enable , q => in_port(0 downto 0));

MUL_reg : entity work.reg(Behavioral_reg_input) generic map (n=>1) port map(d => MULA, clk => clk100, en => MULA_enable , q => in_port(0 downto 0));

DIV_reg : entity work.reg(Behavioral_reg_input) generic map (n=>1) port map(d => DIVA, clk => clk100, en => DIVA_enable , q => in_port(0 downto 0));

Ain_reg : entity work.reg(Behavioral_reg_input) generic map (n=>4) port map(d => A, clk => clk100, en => A_enable , q => in_port(3 downto 0));

ENTER_reg: entity work.reg(Behavioral_reg_input) generic map (n=>1) port map(d => ENTER, clk => clk100, en => ENTER_enable , q => in_port(0 downto 0));

Y_reg: entity work.reg(Behavioral_reg_output) generic map (n=>8) port map(d => out_port, clk => clk100, en => Y_enable , q => Y);
         


process(read_strobe)
begin
if(read_strobe ='1') and (port_id=x"01") then
   RESET_enable<='1';
else
   RESET_enable<='0';
end if;   
end process;

process(read_strobe)
begin
if(read_strobe ='1') and (port_id=x"02") then
   MULA_enable<='1';
else
   MULA_enable<='0';
end if;   
end process;

process(read_strobe)
begin
if(read_strobe ='1') and (port_id=x"03") then
   DIVA_enable<='1';
else
   DIVA_enable<='0';
end if;   
end process;

process(read_strobe)
begin
if(read_strobe ='1') and (port_id=x"04") then
   A_enable<='1';
else
   A_enable<='0';
end if;   
end process;

process(read_strobe)
begin
if(read_strobe ='1') and (port_id=x"05") then
   ENTER_enable<='1';
else
   ENTER_enable<='0';
end if;   
end process;



process(read_strobe)
begin       
if(write_strobe ='1') and (port_id=x"06") then
   Y_enable<='1';
else        
   Y_enable<='0';
end if;     
end process;

             
end Behavioral;


