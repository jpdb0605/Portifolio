library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity multiplicador4x4_tb is
end;
architecture bench of multiplicador4x4_tb is
  -- Clock period
  constant clk_period : time := 5 ns;
  -- Generics
  -- Ports
  signal A : std_logic_vector(15 downto 0);
  signal B : std_logic_vector(15 downto 0);
  signal resultado : std_logic_vector(31 downto 0);
begin
  multiplicador4x4_inst : entity work.multiplicador4x4
  port map (
    A => A,
    B => B,
    resultado => resultado
  );
-- clk <= not clk after clk_period/2;
end;