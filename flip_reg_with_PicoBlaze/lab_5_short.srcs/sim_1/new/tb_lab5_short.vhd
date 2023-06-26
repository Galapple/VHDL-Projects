library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_lab5_short is
--  Port ( );
end tb_lab5_short;

architecture Behavioral of tb_lab5_short is

component main 
Port ( switch_reg : in STD_LOGIC_VECTOR (3 downto 0);
        clk_100M, reset : in std_logic;
           led_reg : out STD_LOGIC_VECTOR (3 downto 0));
end component;

signal led_reg, switch_reg : STD_LOGIC_VECTOR (3 downto 0);

signal clk_100M, reset : std_logic:='0';

begin

U1 : main port map(switch_reg => switch_reg , led_reg => led_reg, clk_100M => clk_100M, reset => reset);

process
begin
clk_100M <= not clk_100M; wait for 10 ns;
end process;

process
begin
reset <= '0';
switch_reg <= "0100"; wait for 500 us;
reset <= '0';
--switch_reg <= "0001"; wait for 100 us;
--switch_reg <= "0101"; wait for 100 us;
end process;

end Behavioral;
