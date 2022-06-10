#ifndef PLAYABLE_H
#define PLAYABLE_H

#include <string>

/*
 * Playable class has a pure virtual function and it will behave as an interface 
 */ 
class Playable
{
public:
	virtual std::string getClassName() = 0;
};

#endif // PLAYABLE_H
