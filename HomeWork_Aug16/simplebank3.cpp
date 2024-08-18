#include <iostream>
#include <string>

#include "simplebank3.h"

	NonCashCurrencyExchange::NonCashCurrencyExchange(std::string name, double AmdInitBalance, double UsdInitBalance) 
	: owner(name), AMDaccountBalance(AmdInitBalance), USDaccountBalance(UsdInitBalance) {
	
	}

	void NonCashCurrencyExchange::CurrencyPerchase(double amount, double rate) {
		if(rate > 0) {
		AMDaccountBalance -= amount * rate;
		USDaccountBalance += amount;
		
		}
	}

	void NonCashCurrencyExchange::CurrencySail(double amount, double rate) {
		if(rate > 0) {
		AMDaccountBalance += amount * rate;
		USDaccountBalance -= amount;
		}
	}

	void NonCashCurrencyExchange::CheckBalances() const {
		std::cout << owner << "'s AMD account balance is: AMD" << AMDaccountBalance << std::endl;
		std::cout << owner << "'s USD account balance is: USD" << USDaccountBalance << std::endl;
	}


int main() {

	NonCashCurrencyExchange myExchange("George Bush", 1000000.00, 50000.00);
	
	myExchange.CurrencyPerchase(1000, 391.00);
	myExchange.CheckBalances();
	myExchange.CurrencySail(500.00, 385.00);
	myExchange.CheckBalances();
}
	
