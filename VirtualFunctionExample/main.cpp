#include <iostream>
#include "Sport.h"
#include "Football.h"
#include "SportVirtual.h"
#include "FootballVirtual.h"

void PrintName(Sport* sportObject) {
	std::cout << sportObject->GetName() << std::endl;
}

void PrintNameVirtual(SportVirtual* otherSportObject) {
	std::cout << otherSportObject->GetName() << std::endl;
}

int main()
{
	// Let's create one Sport and one Football object
	Sport* sportObject = new Sport;
	Football* footballObject = new Football("Football");
	
	// Let's call their GetName functions
	std::cout << sportObject->GetName() << std::endl;
	std::cout << footballObject->GetName() << std::endl;
	std::cout << "***************************************" << std::endl;
	
	// Every object calls its own function, so far so good
	// However, if we pass these objects to a function which takes Sport object as a parameter
	// We can see that both lines prints the same result "My name is Sport" on the console
	// Although we pass Football class object as an argument
	PrintName(sportObject);
	PrintName(footballObject);
	std::cout << "***************************************" << std::endl;
	
	// To avoid this problem, we have to declare GetName function as virtual in the base class
	// So that compiler creates a V-Table for the virtual function 
	// And determines on the runtime that if that function is overridden, it calls the one which suits the type (GetName of Football class in this case)
	
	// That's why, we create objects from SportVirtual and FootballVirtual objects
	// And we make GetName function as virtual
	// Also we override it in the child class
	SportVirtual* otherSportObject = new SportVirtual;
	FootballVirtual* otherFootballObject = new FootballVirtual("Football");
	
	PrintNameVirtual(otherSportObject);
	PrintNameVirtual(otherFootballObject);
	
	return 0;
}
