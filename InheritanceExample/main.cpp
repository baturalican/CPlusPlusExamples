#include <iostream>
#include "SpecialAccount.h"

int main() {
	Account myAccount;
	SpecialAccount mySpecialAccount;
	
	myAccount.deposit(1000);
	mySpecialAccount.deposit(2000);
	
	myAccount.withdraw(2000);
	myAccount.withdraw(500);
	
	mySpecialAccount.withdraw(3000);
	mySpecialAccount.withdraw(1500);
	mySpecialAccount.withdraw(500);
	
	return 0;
}
