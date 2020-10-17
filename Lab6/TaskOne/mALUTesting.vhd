--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:46:27 10/26/2017
-- Design Name:   
-- Module Name:   /home/work/Documents/UC/Freshman/EECE2060C/Labs/Lab6/TaskOne/mALUTesting.vhd
-- Project Name:  TaskOne
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mALUStructure
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY mALUTesting IS
END mALUTesting;
 
ARCHITECTURE behavior OF mALUTesting IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mALUStructure
    PORT(
         ins : IN  std_logic_vector(1 downto 0);
         A : IN  std_logic_vector(2 downto 0);
         B : IN  std_logic_vector(2 downto 0);
         S : OUT  std_logic_vector(2 downto 0);
         OV : OUT  std_logic;
         Cout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal ins : std_logic_vector(1 downto 0) := (others => '0');
   signal A : std_logic_vector(2 downto 0) := (others => '0');
   signal B : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal S : std_logic_vector(2 downto 0);
   signal OV : std_logic;
   signal Cout : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mALUStructure PORT MAP (
          ins => ins,
          A => A,
          B => B,
          S => S,
          OV => OV,
          Cout => Cout
        );

   -- Clock process definitions
   <clock>_process :process
   begin
		<clock> <= '0';
		wait for <clock>_period/2;
		<clock> <= '1';
		wait for <clock>_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for <clock>_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
