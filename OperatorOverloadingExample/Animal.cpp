#include <cstring>
#include <iostream>
#include "Animal.h"

Animal::Animal() : age{0}, name{nullptr}, type{VertebrateType::invalid} {
	name = new char[1];
	*name = '\0';
}

Animal::Animal(int animalAge, char* animalName, VertebrateType animalType) : age{animalAge}, name{nullptr}, type{VertebrateType::invalid} {
	if (animalName == nullptr) {
		name = new char[1];
		*name = '\0';
	} else {
		name = new char[std::strlen(animalName) + 1];
		std::strcpy(name, animalName);
	}
}

Animal::Animal(const Animal& source) : Animal{source.age, source.name, source.type} {
	
}

Animal::~Animal() {
	delete[] name;
}

Animal& Animal::operator=(const Animal& rhs) {	
	std::cout << "Overloaded assignment is called!" << std::endl;
	
	// If the assigned object is the same object, we just return the current object
	if (this == &rhs) {
		return *this;	
	}
	
	// Copy non-pointer members
	age = rhs.getAge();
	type = rhs.getType();
	
	// Delete the previously allocated storage for name field
	delete[] name;
	
	// Allocate new storage to hold the right hand side object's copied name field plus the terminating character \0
	name = new char[std::strlen(rhs.getName()) + 1];
	// Copy the characters
	std::strcpy(name, rhs.getName());
	
	// Return the current object as a reference
	// NOTE: We return the reference for current object, cuz if chain assignment is happening, we want to avoid extra copies created, we want efficiency
	return *this;
}

void Animal::displayAnimal() const {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
}

int Animal::getAge() const {
	return age;
}

const char* Animal::getName() const {
	return name;
}

VertebrateType Animal::getType() const {
	return type;
}

