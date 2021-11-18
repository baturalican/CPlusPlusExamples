#ifndef SPECIAL_ACCOUNT_H
#define SPECIAL_ACCOUNT_H
#include "Account.h"

class SpecialAccount : public Account {
public:
	SpecialAccount();
	~SpecialAccount();
	
	bool withdraw(double);
};

#endif // SPECIAL_ACCOUNT_H
