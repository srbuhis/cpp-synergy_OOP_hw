#include <iostream>
#include <string>

#include "simplebank2.h"

BankAccount::BankAccount(std::string name, double limit) 
	: creditor(name), creditLineBalance(0), creditLineLimit(limit) {
	
	}

void BankAccount::GettingLoan(double amount) {
		if(amount > 0 && amount <= creditLineLimit) {
		creditLineBalance -= amount;
		}
	}

void BankAccount::RepaymentLoan(double amount) {
		if(amount > 0 && amount <= std::abs(creditLineBalance)) {
		creditLineBalance += amount;
		}
	}

void BankAccount::CheckBalance() const {
		std::cout << creditor << "'s credit account balance is: AMD" << creditLineBalance << std::endl;
	
	}


int main() {

	BankAccount myAccount("George Bush", 1000000.00);

	myAccount.CheckBalance();
	myAccount.GettingLoan(700000.00);
	myAccount.RepaymentLoan(300000.00);
	myAccount.CheckBalance();

}

