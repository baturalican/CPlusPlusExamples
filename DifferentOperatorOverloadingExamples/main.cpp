#include <iostream>
#include "MyInteger.h"

int main()
{
	MyInteger integer1(5);
	MyInteger integer2(5);
	
	MyInteger integer3 = -integer1;
	
	std::cout << "Third integer is: " << integer3 << std::endl;
	
	MyInteger integer4 = integer1 + integer2;
	
	std::cout << "Fourth integer is: " << integer4 << std::endl;
	
	MyInteger integer5 = integer1 - integer2;
	
	std::cout << "Fifth integer is: " << integer5 << std::endl;
	
	if (integer1 == integer2) {
		std::cout << "Integer 1 and Integer 2 are equal" << std::endl;
	}
	else {
		std::cout << "Integer 1 and Integer 2 are NOT equal" << std::endl;
	}
		
	return 0;
}
