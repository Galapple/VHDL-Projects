library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity reg is
generic(n: positive := 1);
    Port ( d : in STD_LOGIC_VECTOR (n-1 downto 0);
           clk,en : in std_logic;
           q : out STD_LOGIC_VECTOR (n-1 downto 0));
end reg;

architecture Behavioral_reg_input of reg is

signal T: std_logic_vector (n-1 downto 0);

begin

q <=   T when en='1' else 
(others=>'0');

process(clk)
begin
   if (rising_edge(clk)) then
   T<= d;
   end if;
end process;


end Behavioral_reg_input;



architecture Behavioral_reg_output of reg is
begin


process(clk)
begin
if (rising_edge(clk)) then
    if (en = '1') then
	   q <= d;
    end if;
end if;

end process;

end Behavioral_reg_output;
