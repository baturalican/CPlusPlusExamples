#ifndef SPECIAL_ACCOUNT_H
#define SPECIAL_ACCOUNT_H
#include <string>
#include "Account.h"

class SpecialAccount : public Account {
public:
	SpecialAccount();
	~SpecialAccount();
	
	bool withdraw(double);
	void setIbanNumber(long long int);
	void setPhoneNumber(std::string);
};

#endif // SPECIAL_ACCOUNT_H
