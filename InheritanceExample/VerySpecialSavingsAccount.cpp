#include <iostream>
#include "VerySpecialSavingsAccount.h"
#include "Account.h"

VerySpecialSavingsAccount::VerySpecialSavingsAccount() {
}

VerySpecialSavingsAccount::~VerySpecialSavingsAccount() {
}

std::string VerySpecialSavingsAccount::getPhoneNumber() {
	// We cannot access the phoneNumber attribute of the Account base class, since SpecialSavingsAccount class is privately inherited from the SavingsAccount class, and the phoneNumber attribute became private.
	// return phoneNumber;
	std::cout << "You cannot get the phone number of your account! ";
	return "ERROR";
}

void VerySpecialSavingsAccount::setPhoneNumber(std::string phone) {
	// Since we cannot access phoneNumber attribute of the Account base class, we cannot set the phoneNumber attribute (also public setter method became private when SpecialSavingsAccount class is created)
	std::cout << "You cannot set the phone number of your account!" << std::endl;
}

