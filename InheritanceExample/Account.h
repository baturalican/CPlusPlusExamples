#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
	double money;
public:
	Account();
	~Account();
	
	inline double getMoney() {return money;};
	inline void setMoney(double amount) {money = amount;};
	void deposit(double);
	bool withdraw(double);

};

#endif // ACCOUNT_H
