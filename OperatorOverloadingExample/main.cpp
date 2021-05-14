#include <iostream>
#include "Animal.h"
#include "types.h"

int main()
{
	Animal a;
	Animal b{12, "Kitty", VertebrateType::mammal};
	
	std::cout << "****************Before the assignment****************" << std::endl;
	
	a.displayAnimal();
	b.displayAnimal();
	
	a = b;
	
	std::cout << "\n****************After the assignment****************" << std::endl;
	
	a.displayAnimal();
	b.displayAnimal();
	
	return 0;
}
