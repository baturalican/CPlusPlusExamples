#ifndef VERYSPECIALSAVINGSACCOUNT_H
#define VERYSPECIALSAVINGSACCOUNT_H
#include "SpecialSavingsAccount.h"

class VerySpecialSavingsAccount : public SpecialSavingsAccount
{
public:
	VerySpecialSavingsAccount();
	~VerySpecialSavingsAccount();

	std::string getPhoneNumber();
	void setPhoneNumber(std::string);
};

#endif // VERYSPECIALSAVINGSACCOUNT_H
