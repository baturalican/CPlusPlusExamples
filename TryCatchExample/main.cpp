#include <iostream>

bool ExecuteSomething() {
	try {
		int number {0};
	
		std::cout << "Enter a number between 1-99 (Don't enter 0): ";
		std::cin >> number;
		
//		if (number < 1) throw "Entered less than 1"; // Throw a string literal
//		if (number > 99) throw std::runtime_error("Entered greater than 99"); // Throwing a std::runtime_error derived from std::exception
//		if (number == 0) throw 0;
//	} catch (const char* e) { // Catch a const char* here, otherwise your program crash because of an unhandled exception
//		std::cout << "User entered a number less than 1" << std::endl;
//		return false;
//	} catch (std::exception const& e) { // Catch an exception derived from the std::exception class
//		std::cout << "User entered a number greater than 99" << std::endl;
//		return false;
//	} catch (int e) { // Catch an integer error code (Maybe you can enumerate here so that you can define different error codes)
//		std::cout << "User entered a number equals to 0" << std::endl;
//		return false;
//	}

	// Apart from throwing string literals or numbers, we can throw objects from the classes (out_of_range, invalid_argument etc.) derived from the exception class
	if (number == 0) throw std::invalid_argument("Entered 0"); // Throw an invalid argument exception
	if (number < 1 || number > 99) throw std::out_of_range("Entered a number out of range (1-99)"); // Throw an out of range exception
	} catch (std::exception& e) { // Catch the std::exception class object here and handle it in the block
		std::cout << e.what() << std::endl;
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
