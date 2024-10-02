library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity bcd_adder is
    Port ( A,B : in  STD_LOGIC_VECTOR(3 downto 0);
           Cin : in  STD_LOGIC;
           soma : out  STD_LOGIC_VECTOR(3 downto 0);
           Cout : out  STD_LOGIC);
end bcd_adder;

architecture arch of bcd_adder is
	signal soma_temporaria : unsigned (4 downto 0);

begin
	soma_temporaria <= unsigned('0' & A) + unsigned('0' & B) + unsigned("0000" + Cin);
	process(soma_temporaria)
		begin
			if (soma_temporaria > 9) then
				Cout <= '1';
				soma <= (std_logic_vector(soma_temporaria(3 downto 0)) + "0110");
			else
				Cout <= '0';
				soma <= std_logic_vector(soma_temporaria(3 downto 0));
			end if;
	end process;
end arch;