#include <iostream>
#include <string>
#include <vector>

class House {
public:
	House(short, short);
	// Comment below line to see the difference between copy and move constructor calls
	// NOTE: DO NOT uncomment the noexcept field, otherwise STL Container (std::vector here) WILL NOT use the move constructor since move constructor throws an exception
	House(House&&) noexcept;
	House(const House&);
	~House();
private:
	short doorNumber;
	short* roomNumber;
};

// Regular Constructor
House::House(short houseDoorNumber, short numberOfRooms) : doorNumber{houseDoorNumber} {
	roomNumber = new short;
	*roomNumber = numberOfRooms;
	std::cout << "Regular constructor is called" << std::endl;
}

// Our move constructor copies the address of the roomNumber field from the source object
// Then nullifies the source object's roomNumber field so that it does not point to a short variable anymore 
// If you want to see the difference between copy and move constructors, just comment out the move constructor below
// NOTE: DO NOT uncomment the noexcept field, otherwise STL Container (std::vector here) WILL NOT use the move constructor since move constructor throws an exception
House::House(House &&source) noexcept : doorNumber{source.doorNumber}, roomNumber{source.roomNumber} {
	source.roomNumber = nullptr;
	std::cout << "Move constructor is called" << std::endl;
}

// Deep copy constructor
House::House(const House& source) : House{source.doorNumber, *source.roomNumber} {
	std::cout << "Copy constructor is called" << std::endl;
}

House::~House() {
	// If regular object with roomNumber field is not nullified is called
	if(roomNumber != nullptr) {
		std::cout << "Destructor called for roomNumber: " << *roomNumber << std::endl; 
	// If Nullified object that is used in the move constructor is called
	} else {
		std::cout << "Destructor called for null pointer" << std::endl;
	}
	delete roomNumber;
}

int main()
{
	std::vector<House> myHouses;
	
	// We have to observe here that copying the elements and then move in the vector is inefficient
	// We call copy and regular constructors so many unnecessary times
	// Comment the move constructor above (both decleration and implementation) and observe the difference
	myHouses.push_back(House(35, 4));
	myHouses.push_back(House(33, 3));
	myHouses.push_back(House(30, 2));
	
	return 0;
}
