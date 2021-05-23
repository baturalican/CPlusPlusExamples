#include <cstring>
#include <iostream>
#include "Animal.h"

Animal::Animal() : age{0}, name{nullptr}, type{VertebrateType::invalid} {
	name = new char[1];
	*name = '\0';
}

Animal::Animal(int animalAge, char* animalName, VertebrateType animalType) : age{animalAge}, name{nullptr}, type{animalType} {
	if (animalName == nullptr) {
		name = new char[1];
		*name = '\0';
	} else {
		name = new char[std::strlen(animalName) + 1];
		std::strcpy(name, animalName);
	}
}

Animal::Animal(const Animal& source) : Animal{source.age, source.name, source.type} {
	std::cout << "Copy constructor is called" << std::endl;
}

Animal::Animal(Animal&& source) {
	this->age = source.age;
	this->name = source.name;
	this->type = source.type;
	
	source.name = nullptr;
	
	std::cout << "Move constructor is called" << std::endl;
}

Animal::~Animal() {
	if (this->name == nullptr) {
		std::cout << "Destroying the Animal whose name is nullptr" << std::endl;
	} else {
		std::cout << "Destroying the Animal whose name is: " << name << std::endl;
	}
	delete[] name;
}

Animal& Animal::operator=(const Animal& rhs) {	
	std::cout << "Copy assignment is called!" << std::endl;
	
	// If the assigned object is the same object, we just return the current object
	if (this == &rhs) {
		return *this;	
	}
	
	// Copy non-pointer members
	this->age = rhs.age;
	this->type = rhs.type;
	
	// Delete the previously allocated storage for name field
	delete[] name;
	
	// Allocate new storage to hold the right hand side object's copied name field plus the terminating character \0
	this->name = new char[std::strlen(rhs.name) + 1];
	// Copy the characters
	std::strcpy(name, rhs.name);
	
	// Return the current object as a reference
	// NOTE: We return the reference for current object, cuz if chain assignment is happening, we want to avoid extra copies created, we want efficiency
	return *this;
}

Animal& Animal::operator=(Animal&& rhs) {
	std::cout << "Move assignment is called!" << std::endl;
	
	// If the assigned object is the same object, we just return the current object
	if (this == &rhs) {
		return *this;	
	}
	
	// Copy non-pointer members
	this->age = rhs.age;
	this->type = rhs.type;
	
	// Delete the previously allocated storage for name field
	delete[] name;
	
	this->name = rhs.name;
	
	// NOTE:Here is important to nullify the pointer value of the name member variable of the right hand side object
	// Otherwise, when we destroy the right hand side object, the value pointed by the name member variable gets destroyed as well!!!
	rhs.name = nullptr;
	
	return *this;
}

void Animal::displayAnimal() const {
	std::cout << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	
	switch (static_cast<int>(type)) {
		case 0:
			std::cout << "Invalid type!" << std::endl;
			break;
		case 1:
			std::cout << "Type: " << "Mammal" << std::endl;
			break;
		case 2:
			std::cout << "Type: " << "Bird" << std::endl;
			break;
		case 3:
			std::cout << "Type: " << "Amphibian" << std::endl;
			break;
		case 4:
			std::cout << "Type: " << "Reptile" << std::endl;
			break;
		case 5:
			std::cout << "Type: " << "Fish" << std::endl;
			break;
	};
	
	std::cout << std::endl;
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

