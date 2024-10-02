library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity multiplicador4x4 is
	port(A,B: in std_logic_vector(15 downto 0);
		  resultado: out std_logic_vector(31 downto 0));
end multiplicador4x4;

architecture Behavioral of multiplicador4x4 is
	component multiplicador4bit is
		Port ( A : in  std_logic_vector (15 downto 0);
           B : in  std_logic_vector (3 downto 0);
           resultado : out  std_logic_vector (19 downto 0));
	end component;
	
	component top_adder is
		Port ( A : in  STD_LOGIC_vector(15 downto 0);
           B : in  STD_LOGIC_vector(15 downto 0);
           soma : out  STD_LOGIC_vector(19 downto 0));
	end component;
	-- somas e parcelas temporarias
	signal p0,p1,p2,p3,s0,s1,s2,s3: std_logic_vector(19 downto 0);
	signal p4: std_logic_vector(15 downto 0);
	
begin
	parcela0: multiplicador4bit port map(A, B(3 downto 0), p0);
	parcela1: multiplicador4bit port map(A, B(7 downto 4), p1);
	parcela2: multiplicador4bit port map(A, B(11 downto 8), p2);
	parcela3: multiplicador4bit port map(A, B(15 downto 12), p3);
	p4 <= p3(19 downto 16) & p2(19 downto 16) & p1(19 downto 16) & "0000";
	soma0: top_adder port map(p1(15 downto 0), p0(19 downto 4), s0);
	soma1: top_adder port map(p2(15 downto 0), s0(19 downto 4), s1);
	soma2: top_adder port map(p3(15 downto 0), s1(19 downto 4), s2);
	soma3: top_adder port map(p4, s2(19 downto 4), s3);
	resultado <= s3(15 downto 0) & s2(3 downto 0) & s1(3 downto 0) & s0(3 downto 0) & p0(3 downto 0);
end Behavioral;