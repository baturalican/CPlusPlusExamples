#include <iostream>
#include "SpecialAccount.h"
#include "VerySpecialSavingsAccount.h"

int main() {
	Account myAccount;
	myAccount.dummyPublicData = 12;
	SpecialAccount mySpecialAccount;
	mySpecialAccount.setPhoneNumber("5YY-YYY-YY-YY");
	
	std::cout << "Account dummy public data is: " << myAccount.dummyPublicData << std::endl;
	std::cout << "My special account phone number is: " << mySpecialAccount.getPhoneNumber() << std::endl;
	
	myAccount.deposit(1000);
	mySpecialAccount.deposit(2000);
	
	myAccount.withdraw(2000);
	myAccount.withdraw(500);
	
	mySpecialAccount.withdraw(3000);
	mySpecialAccount.withdraw(1500);
	mySpecialAccount.withdraw(500);
	
	VerySpecialSavingsAccount verySpecialAccount;
	verySpecialAccount.setPhoneNumber("5ZZ-ZZZ-ZZ-ZZ");
	std::cout << "Very special savings account phone number is: " << verySpecialAccount.getPhoneNumber() << std::endl;
	
	return 0;
}
