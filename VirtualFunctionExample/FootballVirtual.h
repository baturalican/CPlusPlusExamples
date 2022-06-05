#ifndef FOOTBALLVIRTUAL_H
#define FOOTBALLVIRTUAL_H

#include "SportVirtual.h"

class FootballVirtual: public SportVirtual
{
public:
	FootballVirtual(std::string);
	std::string GetName() override; 
	// Although override is not necessary here, it helps us 3 things: 
	// 1. Avoiding spelling mistakes when overriding.
    // 2. If a function in the base class is not virtual, it raises an error for us.
	// 3. It makes our code more readable.
private:
	std::string m_name;
};

#endif // FOOTBALLVIRTUAL_H
