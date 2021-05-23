#ifndef ANIMAL_H
#define ANIMAL_H

#include "types.h"

class Animal
{
public:
	Animal();
	Animal(int, char* , VertebrateType);
	Animal(const Animal&);
	Animal(Animal&&);
	~Animal();
	
	// Definition of the overloaded COPY assignment operator
	Animal& operator=(const Animal&);
	
	// Definition of the overloaded MOVE assignment operator
	Animal& operator=(Animal&&);
	
	void displayAnimal() const;
	int getAge() const;
	const char* getName() const;
	VertebrateType getType() const;
	
private:
	int age;
	char* name;
	VertebrateType type;
};

#endif // ANIMAL_H
