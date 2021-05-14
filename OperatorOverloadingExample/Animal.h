#ifndef ANIMAL_H
#define ANIMAL_H

#include "types.h"

class Animal
{
public:
	Animal();
	Animal(int, char* , VertebrateType);
	Animal(const Animal&);
	~Animal();
	
	// Definition of overloaded assignment operator
	Animal& operator=(const Animal&);
	
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
