#include <iostream>

// Define typename alias here
template<typename T>
void print(T something) { // Here T is a type
	std::cout << "This is: " << something << std::endl; // Print whatever argument (whose type can change) provided
}

int main() {
	// Print some different data types
	print<int>(4); // We have to define type between <> so that compiler can replace typename with it
	print<double>(5.2302);
	print<std::string>("something I want it to be printed");
	
	return 0;
}
