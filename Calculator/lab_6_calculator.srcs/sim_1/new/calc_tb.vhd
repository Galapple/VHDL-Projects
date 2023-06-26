----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 02.06.2023 17:06:41
-- Design Name: 
-- Module Name: tb_main - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity tb_main is
--  Port ( );
end tb_main;

architecture Behavioral of tb_main is

component main
port(A: in std_logic_vector (3 downto 0);
     clk100: in std_logic;
     cntr_rst: in std_logic;
     RESET: in std_logic_vector(0 downto 0);
     ENTER: in std_logic_vector(0 downto 0);
     MULA: in std_logic_vector(0 downto 0);
     DIVA: in std_logic_vector(0 downto 0);
     Y: out std_logic_vector( 7 downto 0));
end component;

signal A:  std_logic_vector (3 downto 0);
signal clk100:  std_logic:='1';
signal cntr_rst:  std_logic:='0';
signal RESET:  std_logic_vector(0 downto 0):="0";
signal ENTER:  std_logic_vector(0 downto 0):="0";
signal MULA:  std_logic_vector(0 downto 0):="0";
signal DIVA:  std_logic_vector(0 downto 0):="0";
signal Y:  std_logic_vector( 7 downto 0);


begin
U: main port map(A=>A,clk100=>clk100,cntr_rst=>cntr_rst,RESET=>RESET,
ENTER=>ENTER,MULA=>MULA,DIVA=>DIVA,Y=>Y);


process
begin
clk100<= not clk100; wait for 5 ns;
end process;

process
begin
cntr_rst<='1'; wait for 10 ns;
cntr_rst<='0'; wait for 10 ns;
RESET<="1"; wait for 15 us;
RESET<="0"; wait for 15 ns;
A<="0100"; MULA<="0";DIVA<="0";ENTER<="1"; wait for 15 us;
 MULA<="1";DIVA<="0";ENTER<="0"; wait for 15 us;
A<="0010"; MULA<="0";DIVA<="0";ENTER<="1"; wait for 15 us;
 MULA<="1";DIVA<="0";ENTER<="0"; wait for 15 us;
A<="1100"; MULA<="0";DIVA<="0";ENTER<="1"; wait for 15 us;
 MULA<="1";DIVA<="0";ENTER<="0"; wait for 15 us;
A<="0010"; MULA<="0";DIVA<="0";ENTER<="1"; wait for 15 us;
 MULA<="0";DIVA<="1";ENTER<="0"; wait for 15 us;
wait for 50 ns;
wait;
end process;

process
begin
cntr_rst<='1'; wait for 15 ns;
cntr_rst<='0'; wait for 15 ns;
RESET<="1"; wait for 100 us;


wait;
end process;

end Behavioral;
