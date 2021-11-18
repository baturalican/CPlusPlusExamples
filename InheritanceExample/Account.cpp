#include <iostream>
#include "Account.h"

Account::Account() : money{0} {
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

