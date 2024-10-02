library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity multiplicador1bit is
	port (A,B: in std_logic_vector(3 downto 0);
			unidade, dezena: out std_logic_vector(3 downto 0)); 
end multiplicador1bit;

architecture Behavioral of multiplicador1bit is
	signal produto: std_logic_vector(7 downto 0);

begin
	produto <= A*B;
	process(produto)
		begin
			if produto <= "00001001" then -- produto <= 10
				dezena <= "0000";
				unidade <= produto(3 downto 0);
				
			elsif produto <= "00010011" then -- 10 < produto <= 19
				dezena <= "0001";
				unidade <= produto(3 downto 0) + "0110"; – 6 algarismos n representados
				
			elsif produto <= "00011101" then -- 20 < produto <= 29
				dezena <= "0010";
				unidade <= produto(3 downto 0) + "1100"; – 12 algarismos n representados
				
			elsif produto <= "00100111" then -- 30 < produto <= 39
				dezena <= "0011";
				unidade <= produto(3 downto 0) + "0010"; – 18 algarismos n representados, 18 - 16 = 2
				
			elsif produto <= "00110001" then -- 40 < produto <= 49
				dezena <= "0100";
				unidade <= produto(3 downto 0) + "1000"; – 24 algarismos n representados, 24 - 16 = 8
				
			elsif produto <= "00111011" then -- 50 < produto <= 59
				dezena <= "0101";
				unidade <= produto(3 downto 0) + "1110"; – 30 algarismos n representados, 30 - 16 = 14
				
			elsif produto <= "01000101" then -- 60 < produto <= 69
				dezena <= "0110";
				unidade <= produto(3 downto 0) + "0100"; – 36 algarismos n representados, 36 - 32 = 4	
			elsif produto <= "01001111" then -- 70 < produto <= 79
				dezena <= "0111";
				unidade <= produto(3 downto 0) + "1010"; – 42 algarismos n representados, 42 - 32 = 10		
			else – produto <= 81
				dezena <= "1000";
				unidade <= produto(3 downto 0); – 48 algarismos n representados, 48 - 48 = 0
			end if;
		end process;
end Behavioral;

