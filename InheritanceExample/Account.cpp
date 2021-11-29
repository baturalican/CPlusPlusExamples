#include <iostream>
#include "Account.h"

Account::Account() : dummyPublicData{0}, money{0}, phoneNumber{"5xx-xxx-xx-xx"} {
}

Account::~Account() {
}

void Account::deposit(double amount) {
	if (amount > 0) {
		money += amount;
		std::cout << "You have deposited " << amount << "$. Total balance is: " << money << std::endl;
	}
}

bool Account::withdraw(double amount) {
	if (amount <= money) {
		money -= amount;
		std::cout << "You have withdrawn " << amount << "$. Total balance is: " << money << std::endl;
		return true;
	}
	
	std::cout << "You cannot withdraw " << amount << "$!" << std::endl;
	return false;
}

