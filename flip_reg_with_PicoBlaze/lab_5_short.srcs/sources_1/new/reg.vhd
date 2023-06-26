library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity in_reg is
generic(n: positive := 2);
port( in_port : in std_logic_vector (n-1 downto 0);
        clk_100M , EN: in std_logic;
      out_port : out std_logic_vector (n-1 downto 0));
end in_reg;

architecture Behavioral of in_reg is

begin

process(clk_100M)
begin
if rising_edge (clk_100M) then 
    if EN = '1' then
        out_port <= in_port;
    else 
        out_port <= (others => 'Z');
    end if;
end if;
end process;
end Behavioral;
