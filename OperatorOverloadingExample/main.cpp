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
	a = Animal{3, "Lizzardy", VertebrateType::reptile};
	
	std::cout << "\n****************After the assignment****************" << std::endl;
	
	a.displayAnimal();
	b.displayAnimal();
	
	return 0;
}
