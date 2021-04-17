#include <iostream>
#include <chrono>
#include "ConstructorBody.h"
#include "ConstructorInitializationList.h"

int main()
{
	// Construct someoneBody object using no argument constructor in StudentBody class and measure time between initialization
	auto start = std::chrono::steady_clock::now();
	StudentBody someoneBody;
	auto end = std::chrono::steady_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
	std::cout << "No argument constructor body is run " << duration << " nanoseconds" << std::endl << std::endl;
	
	// Construct kevinBody object using three arguments constructor in StudentBody class and measure time between initialization
	start = std::chrono::steady_clock::now();
	StudentBody kevinBody ("kevin", 786, 7);
	end = std::chrono::steady_clock::now();
	duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
	std::cout << "Three parameter constructor body is run " << duration << " nanoseconds" << std::endl << std::endl;
	
	// Construct someoneList object using no argument constructor in StudentList class and measure time between initialization
	start = std::chrono::steady_clock::now();
	StudentList someoneList;
	end = std::chrono::steady_clock::now();
	duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
	std::cout << "No argument constructor list is run " << duration << " nanoseconds" << std::endl << std::endl;
	
	// Construct kevinList object using three arguments constructor in StudentList class and measure time between initialization
	start = std::chrono::steady_clock::now();
	StudentList kevinList ("kevin", 786, 7);
	end = std::chrono::steady_clock::now();
	duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
	std::cout << "Three parameter constructor list is run " << duration << " nanoseconds" << std::endl << std::endl;
	
	return 0;
}
