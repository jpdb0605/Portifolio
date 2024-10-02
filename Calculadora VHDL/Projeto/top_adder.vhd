library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity top_adder is
    Port ( A : in  STD_LOGIC_vector(15 downto 0);
           B : in  STD_LOGIC_vector(15 downto 0);
           soma : out  STD_LOGIC_vector(19 downto 0));

end top_adder;

architecture Behavioral of top_adder is
	component bcd_adder is
		Port ( A,B : in  STD_LOGIC_VECTOR(3 downto 0);
           Cin : in  STD_LOGIC;
           Soma : out  STD_LOGIC_VECTOR(3 downto 0);
           Cout : out  STD_LOGIC);
	end component;
	
	signal c1, c2, c3: std_logic;
	begin
		adder1: bcd_adder
		port map(A(3 downto 0), B(3 downto 0), '0', soma(3 downto 0), c1);
		
		adder2: bcd_adder
		port map(A(7 downto 4), B(7 downto 4), c1, soma(7 downto 4), c2);
		
		adder3: bcd_adder
		port map(A(11 downto 8), B(11 downto 8), c2, soma(11 downto 8), c3);
		
		adder4: bcd_adder
		port map(A(15 downto 12), B(15 downto 12), c3, soma(15 downto 12), soma(16));
		soma(19 downto 17)<= "000";
end Behavioral;

