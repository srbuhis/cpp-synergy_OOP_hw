#include <string>

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
	private:
		std::string creditor;
		double creditLineBalance;
		double creditLineLimit;
	public:
		BankAccount(std::string name, double limit);
		void GettingLoan(double amount);
		void RepaymentLoan(double amount);
		void CheckBalance() const;
};
		
#endif //BANKACCOUNT_H
