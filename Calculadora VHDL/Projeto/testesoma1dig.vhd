LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
ENTITY testesoma1dig IS
END testesoma1dig;
ARCHITECTURE behavior OF testesoma1dig IS 
    -- Component Declaration for the Unit Under Test (UUT)
    COMPONENT bcd_adder
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         Cin : IN  std_logic;
         soma : OUT  std_logic_vector(3 downto 0);
         Cout : OUT  std_logic
        );
    END COMPONENT;
   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
   signal Cin : std_logic := '0';
   --Outputs
   signal soma : std_logic_vector(3 downto 0);
   signal Cout : std_logic;
   -- No clocks detected in port list. Replace clock below with 
   -- appropriate port name 
	signal clock: std_logic;
   constant clock_period : time := 10 ns;
 
BEGIN
	-- Instantiate the Unit Under Test (UUT)
   uut: bcd_adder PORT MAP (
          A => A,
          B => B,
          Cin => Cin,
          soma => soma,
          Cout => Cout
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