#include "FootballVirtual.h"

FootballVirtual::FootballVirtual(std::string name): m_name{name} {
	
}

std::string FootballVirtual::GetName() {
	return "My name is " + m_name;
}

