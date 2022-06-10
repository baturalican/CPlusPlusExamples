#include "Football.h"

Football::Football(std::string name): m_name{name} {
	
}

std::string Football::GetName() {
	return "My name is " + m_name;
}

std::string Football::getClassName() {
	return "Football";
}

