library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity multiplicador4bit is
    Port ( A : in  std_logic_vector (15 downto 0);
           B : in  std_logic_vector (3 downto 0);
           resultado : out  std_logic_vector (19 downto 0));
end multiplicador4bit;

architecture Behavioral of multiplicador4bit is

	component multiplicador1bit is -- multiplica todo o A por um digito de B
		port (A,B: in std_logic_vector(3 downto 0);
				unidade, dezena: out std_logic_vector(3 downto 0)); 
	end component;
	
	component bcd_adder is
		port ( A,B : in  STD_LOGIC_VECTOR(3 downto 0);
				Cin : in  STD_LOGIC;
				soma : out  STD_LOGIC_VECTOR(3 downto 0);
				Cout : out  STD_LOGIC);
end component;
	
	signal uni: std_logic_vector (11 downto 0);
	signal dez: std_logic_vector (15 downto 0);
	signal c0,c1,c2,c3 : std_logic;
	
begin
	produto0 : multiplicador1bit port map(A(3 downto 0), B, resultado(3 downto 0), dez(3 downto 0));
	produto1 : multiplicador1bit port map(A(7 downto 4), B, uni(3 downto 0), dez(7 downto 4));
	produto2 : multiplicador1bit port map(A(11 downto 8), B, uni(7 downto 4), dez(11 downto 8));
	produto3 : multiplicador1bit port map(A(15 downto 12), B, uni(11 downto 8), dez(15 downto 12));
	soma0 : bcd_adder port map(dez(3 downto 0), uni(3 downto 0), '0', resultado(7 downto 4), c0);
	soma1 : bcd_adder port map(dez(7 downto 4), uni(7 downto 4), c0, resultado(11 downto 8), c1);
	soma2 : bcd_adder port map(dez(11 downto 8), uni(11 downto 8), c1, resultado(15 downto 12), c2);
	soma3 : bcd_adder port map(dez(15 downto 12), "0000", c2, resultado(19 downto 16), c3);
end Behavioral;


