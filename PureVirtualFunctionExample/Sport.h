#ifndef SPORT_H
#define SPORT_H

#include <string>
#include "Playable.h"

/*
 * To be able to create an object from Sport class, we have to define getClassName function in the Sport class
 */
class Sport : public Playable
{
public:
	std::string GetName();
	std::string getClassName() override;
};

#endif // SPORT_H
