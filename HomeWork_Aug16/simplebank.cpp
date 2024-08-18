#include <iostream>
#include <string>

#include "simplebank.h"

	BankAccount::BankAccount(std::string name, double initBalance) 
	: owner(name), balance(initBalance) {
		
	}

	void BankAccount::Deposit(double amount) {
			if(amount > 0) {
			balance += amount;
			}
		}

	void BankAccount::Withdrow(double amount) {
		if(amount > 0 && amount <= balance) {
		balance -= amount;
		}
	}

	void BankAccount::CheckBalance() const {
			std::cout << owner << "'s account balance: AMD" << balance << std::endl;
	}


int main() {

	BankAccount myAccount("George Bush", 100000.00);

	myAccount.CheckBalance();
	myAccount.Deposit(150000.50);
	myAccount.Withdrow(50000.00);
	myAccount.CheckBalance();
}
