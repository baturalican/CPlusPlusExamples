#ifndef ANALOG_H
#define ANALOG_H

#include <string>

class Analog
{
public:
	static int m_voltage;
	static int m_current;
	
	Analog(std::string, float);
	~Analog();
	
	void PrintAllValues();
	static void PrintStaticValues();
private:
	std::string m_equipmentName;
	float m_accuracy;
};

#endif // ANALOG_H
