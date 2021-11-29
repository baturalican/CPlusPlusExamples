#ifndef SPECIALSAVINGSACCOUNT_H
#define SPECIALSAVINGSACCOUNT_H
#include "SavingsAccount.h"

class SpecialSavingsAccount : private SavingsAccount // We privately inherit SavingsAccount class here for only example purposes so that members of the Account class became private members of the SpecialSavingsAccount class
{
public:
	SpecialSavingsAccount();
	~SpecialSavingsAccount();
};

#endif // SPECIALSAVINGSACCOUNT_H
