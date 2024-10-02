library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity calculadora is
	Port(	ps2d, ps2c: in std_logic;
			clk, reset: in std_logic;
			rd_key_code: in std_logic;
			operacao: in std_logic;
			BOTAO: in std_logic; -- botao para escrever no monitor
			resultado_escrever: out std_logic_vector(3 downto 0);
			LCD_DB: out std_logic_vector(7 downto 0));
			
end calculadora;

architecture Behavioral of calculadora is
	
	component top_adder is
	Port ( A : in  STD_LOGIC_vector(15 downto 0);
           B : in  STD_LOGIC_vector(15 downto 0);
           soma : out  STD_LOGIC_vector(19 downto 0));
	end component;

	component multiplicador4x4 is
	Port(A,B: in std_logic_vector(15 downto 0);
		  resultado: out std_logic_vector(31 downto 0));
	end component;
	
	component teclado is
	generic(W_SIZE: integer:=1);
	port( clk,reset: in std_logic;
			ps2d, ps2c: in std_logic;
			rd_key_code: in std_logic;
			number_code: out std_logic_vector(7 downto 0);
			kb_buf_empty: out std_logic);
	end component;
	
	component displaylcd is
	Port (		NUMERO: std_logic_vector(3 downto 0);
			BOTAO: in std_logic;
			LED: out std_logic;
			LCD_DB: out std_logic_vector(7 downto 0);         
			RS:out std_logic;  			
         		RW:out std_logic;				
			CLK:in std_logic;				
			OE:out std_logic;				
			rst:in std_logic);		
	end component;
	
	signal tecla: std_logic_vector(7 downto 0);
	signal teclado_buf: std_logic;
	signal proximo_estado: std_logic_vector(3 downto 0);
	signal A,B: std_logic_vector(15 downto 0);
	signal resultado_soma: std_logic_vector(19 downto 0);
	signal resultado, resultado_mult: std_logic_vector(31 downto 0);
	signal resultado_escrever: std_logic_vector(3 downto 0);
	signal LED, RS, RW, OE: std_logic;
	
begin
	digitar: teclado port map(clk,reset,ps2d,ps2c,rd_key_code,tecla,teclado_buf);
	somar: top_adder port map(A, B, resultado_soma);
	multiplicar: multiplicador4x4 port map(A, B, resultado_mult);
	escrever: displaylcd port map(resultado_escrever, BOTAO, LED, LCD_DB, RS, RW, clk, OE, reset);
	calcular: process(clk, reset, resultado_soma, resultado_mult)
	begin
		if rising_edge(clk) then
			if(reset='1') then
				proximo_estado <= "0000";
			elsif(BOTAO='1') then
				case proximo_estado is
					when "0000" => -- capturar digito 0 de A
						proximo_estado <= "0001";
					
					when "0001" => -- capturar digito 1 de A
						A(15 downto 12) <= tecla(3 downto 0);
						resultado_escrever <= tecla(3 downto 0);
						proximo_estado <= "0010";
				
					when "0010" => -- capturar digito 2 de A
						A(11 downto 8) <= tecla(3 downto 0);
						resultado_escrever <= tecla(3 downto 0);
						proximo_estado <= "0011";
					
					when "0011" => -- capturar digito 3 de A
						A(7 downto 4) <= tecla(3 downto 0);
						resultado_escrever <= tecla(3 downto 0);
						proximo_estado <= "0100";
					
					when "0100" => -- capturar operacao
						A(3 downto 0) <= tecla(3 downto 0);
						resultado_escrever <= tecla(3 downto 0);
						proximo_estado <= "0101";
					
					when "0101" => -- capturar digito 0 de B
						B(15 downto 12) <= tecla(3 downto 0);
						resultado_escrever <= tecla(3 downto 0);
						proximo_estado <= "0110";	
					
					when "0110" => -- capturar digito 1 de B
						B(11 downto 8) <= tecla(3 downto 0);
						resultado_escrever <= tecla(3 downto 0);
						proximo_estado <= "0111";	
						
					when "0111" => -- capturar digito 2 de B
						B(7 downto 4) <= tecla(3 downto 0);
						resultado_escrever <= tecla(3 downto 0);
						proximo_estado <= "1000";	
						
					when "1000" => -- capturar digito 3 de B e exibir primeiro digito do resultado
						B(3 downto 0) <= tecla(3 downto 0);
						proximo_estado <= "1001";
						if (operacao = '0') then	
							-- exibir soma no display
							resultado <= "000000000000" & resultado_soma;
						elsif (operacao = '1') then	
							-- exibir produto no display
							resultado <= resultado_mult;
						end if;
						resultado_escrever <= resultado(31 downto 28);						

					when "1001" => -- exibir segundo digito do resultado
						resultado_escrever <= resultado(27 downto 24);
						proximo_estado <= "1010";
					
					when "1010" => -- exibir terceiro digito do resultado
						resultado_escrever <= resultado(23 downto 20);
						proximo_estado <= "1011";

					when "1011" => -- exibir quarto digito do resultado
						resultado_escrever <= resultado(19 downto 16);
						proximo_estado <= "1100";

					when "1100" => -- exibir quinto digito do resultado
						resultado_escrever <= resultado(15 downto 12);
						proximo_estado <= "1101";

					when "1101" => -- exibir sexto digito do resultado
						resultado_escrever<= resultado(11 downto 8);
						proximo_estado <= "1110";

					when "1110" => -- exibir setimo digito do resultado
						resultado_escrever <= resultado(7 downto 4);
						proximo_estado <= "1111";

					when "1111" => -- exibir oitavo digito do resultado
						resultado_escrever <= resultado(3 downto 0);
						proximo_estado <= "1111";
					end case;
				end if;
			end if;
		end process;
end Behavioral;