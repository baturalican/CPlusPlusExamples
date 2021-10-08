#include <iostream>

// Define typename alias here
template<typename T>
void print(T something) { // Here T is a type
	std::cout << "This is: " << something << std::endl; // Print whatever argument (whose type can change) provided
}

template<typename T>
class MyClass {
public:
	T add(T firstValue, T secondValue) {
		return firstValue + secondValue;
	}
};

int main() {
	// Print some different data types
	print<int>(4); // We have to define type between <> so that compiler can replace typename with it
	print<double>(5.2302);
	print<std::string>("something I want it to be printed");
	
	MyClass<int> addIntegers;
	MyClass<double> addDoubles;
	MyClass<std::string> addStrings;
	
	std::cout << "Integer total is: " << addIntegers.add(4, 2) << std::endl;
	std::cout << "Double total is: " << addDoubles.add(0.12, 2.234) << std::endl;
	std::cout << "String total is: " << addStrings.add("Hello ", "World") << std::endl;
	
	return 0;
}
