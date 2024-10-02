LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
ENTITY testemult1x1 IS
END testemult1x1;
ARCHITECTURE behavior OF testemult1x1 IS 
    -- Component Declaration for the Unit Under Test (UUT)
    COMPONENT multiplicador1bit
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         unidade : OUT  std_logic_vector(3 downto 0);
         dezena : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
 	--Outputs
   signal unidade : std_logic_vector(3 downto 0);
   signal dezena : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace clock below with 
   -- appropriate port name 
	signal clock : std_logic;
   constant clock_period : time := 10 ns;
BEGIN
	-- Instantiate the Unit Under Test (UUT)
   uut: multiplicador1bit PORT MAP (
          A => A,
          B => B,
          unidade => unidade,
          dezena => dezena
        );
   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
      wait for clock_period*10;
      -- insert stimulus here 
      wait;
   end process;
END;