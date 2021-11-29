#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

class Account {
public:
	int dummyPublicData;
protected:
	std::string phoneNumber;
private:
	double money;
public:
	Account();
	~Account();
	
	inline std::string getPhoneNumber() {return phoneNumber;};
	inline double getMoney() {return money;};
	
	inline void setPhoneNumber(std::string phone) {phoneNumber = phone;};
	inline void setMoney(double amount) {money = amount;};
	
	void deposit(double);
	bool withdraw(double);

};

#endif // ACCOUNT_H
