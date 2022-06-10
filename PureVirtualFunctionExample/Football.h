#ifndef FOOTBALL_H
#define FOOTBALL_H

#include <string>
#include "Sport.h"

class Football : public Sport
{
public:
	Football(std::string);
	std::string GetName();
	std::string getClassName() override;
private:
	std::string m_name;
};

#endif // FOOTBALL_H
