#include <iostream>
#include "Sport.h"
#include "Football.h"

void printClassName(Playable* obj) {
	// If obj object has overridden getClassName method in the class, it will be called
	// Otherwise its parent's overridden getClassName method will be called
	std::cout << obj->getClassName() << std::endl;
}

int main()
{
	// !!! To be able to create an object from Sport class, it has to implement all pure virtual functions declared in the Playable interface class
	Sport* sportObject = new Sport();
	Football* footballObject = new Football("Football");
	
	printClassName(sportObject);
	printClassName(footballObject);
	
	return 0;
}
