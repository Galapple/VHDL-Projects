library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity out_reg is

generic(n: positive := 2);
port (clk: in std_logic;
        en: in std_logic;
		d: in std_logic_vector (n-1 downto 0);
		q: out std_logic_vector (n-1 downto 0));
end out_reg;

architecture Behavioral of out_reg is

begin

process(clk) is
begin

if (rising_edge(clk)) then
    if (en = '1') then
	   q <= d;
	end if;
end if;



end process;

end Behavioral;