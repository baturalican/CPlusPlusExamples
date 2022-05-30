#include <iostream>
#include "Analog.h"

// We initialize the static data members
int Analog::m_voltage = 5;
int Analog::m_current = 10;

Analog::Analog(std::string equipmentName, float accuracy) : m_equipmentName{equipmentName}, m_accuracy{accuracy}
{
}

Analog::~Analog()
{
}

void Analog::PrintStaticValues() {
	std::cout << "Voltage value is: " << m_voltage << std::endl;
	std::cout << "Current value is: " << m_current << std::endl;
	
	// We cannot access the non-static member variables through a static function
	// Uncommenting the below line will give you a compile error
	// std::cout << "Equipment name is: " << m_equipmentName << std::endl;
}

void Analog::PrintAllValues() {
	std::cout << "Equipment name is: " << m_equipmentName << std::endl;
	std::cout << "Accuracy is: " << m_accuracy << std::endl;
	
	// However, non-static functions can access static variables like this
	std::cout << "Voltage value is: " << m_voltage << std::endl;
	std::cout << "Current value is: " << m_current << std::endl;
	std::cout << "****************************************" << std::endl;
}
