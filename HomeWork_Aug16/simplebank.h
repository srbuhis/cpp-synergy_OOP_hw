#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
	private:
		std::string owner;
		double balance;

	public:
		BankAccount(std::string name, double initbalance);
		void Deposit(double amount);
		void Withdrow(double amount);
		void CheckBalance() const;

};

#endif
