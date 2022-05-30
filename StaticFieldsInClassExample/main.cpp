#include "Analog.h"

int main()
{
	// First we create an object from the Analog class
	Analog result("Switch", 99.5);
	result.PrintAllValues();
	
	// Then we change the voltage value
	Analog::m_voltage = 100; // Accessing a static public variable using the scope operator (Analog::m_voltage) is highly recommended although result.m_voltage also works
	result.PrintAllValues();
	
	// Let's create another object for Analog class
	Analog anotherResult("Line", 97.45);
	anotherResult.PrintAllValues();
	
	// From the last PrintAllValues statement we can see that both result & anotherResult objects share the same voltage value which is 100
	// Thus, we can infer that static variables for a class does not depend on an object created from that class
	// Since static variables are created on another area of the computer's memory (not on the heap or stack)
	/*	Equipment name is: Switch
	Accuracy is: 99.5
	->Voltage value is: 100
	Current value is: 10
	****************************************
	Equipment name is: Line
	Accuracy is: 97.45
	->Voltage value is: 100
	Current value is: 10
	*****************************************/
	
	// Just print the static values for Analog class
	Analog::PrintStaticValues();
	
	return 0;
}
