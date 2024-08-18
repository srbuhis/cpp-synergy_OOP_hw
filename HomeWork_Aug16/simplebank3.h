#ifndef NONCASHCURRENCYEXCHANGE_H
#define NONCASHCURRENCYEXCHANGE_H

#include <string>

class NonCashCurrencyExchange {
	private:
		std::string owner;
		double AMDaccountBalance;
		double USDaccountBalance;
	
	public:
		NonCashCurrencyExchange(std::string name, double AmdInitBalance, double UsdInitBalance);
		void CurrencyPerchase(double amount, double rate);
		void CurrencySail(double amount, double rate);
		void CheckBalances() const;
};

#endif
