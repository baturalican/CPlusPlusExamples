#include <iostream>

bool ExecuteSomething() {
	try {
		int number {0};
	
		std::cout << "Enter a number between 1-99 (Don't enter 0): ";
		std::cin >> number;
		
		if (number < 1) throw "Entered less than 1"; // Throw a string literal
		if (number > 99) throw std::runtime_error("Entered greater than 99"); // Throwing a std::runtime_error derived from std::exception
		if (number == 0) throw 0;
	} catch (const char* e) { // Catch a const char* here, otherwise your program crash because of an unhandled exception
		std::cout << "User entered a number less than 1" << std::endl;
		return false;
	} catch (std::exception const& e) { // Catch an exception derived from the std::exception class
		std::cout << "User entered a number greater than 99" << std::endl;
		return false;
	} catch (int e) { // Catch an integer error code (Maybe you can enumerate here so that you can define different error codes)
		std::cout << "User entered a number equals to 0" << std::endl;
		return false;
	}
	
	return true;
}

int main() {
	bool isSuccessful = true;
	
	while (isSuccessful) { // Continue until something bad happens
		isSuccessful = ExecuteSomething();
		
		if (isSuccessful) {
			std::cout << "Everthing is good :)" << std::endl;
		} else {
			std::cout << "Something happened :/" << std::endl;
		}
	}
	
	return 0;
}
