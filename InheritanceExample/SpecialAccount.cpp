#include <iostream>
#include "SpecialAccount.h"

SpecialAccount::SpecialAccount() {
}

SpecialAccount::~SpecialAccount() {
}

// Special account requires a special withdraw function
bool SpecialAccount::withdraw(double amount) {
	double money = getMoney(); // Be careful here!!! We cannot access money attribute of the base class Account here, we need a getter function to get its value and a setter to set
	if (money > 1000 && amount <= money) {
		money -= amount;
		setMoney(money);
		std::cout << "You have withdrawn " << amount << "$ from special account. Total balance is: " << money << std::endl;
		return true;
	}
	
	std::cout << "You cannot withdraw " << amount << "$ from special account!" << std::endl;
	return false;
}

