#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

static void	_displayTimestamp(void)
{
	char timestamp[16];

	std::time_t	now = std::time(NULL);
	std::tm	*timeInfo = std::localtime(&now);
	std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", timeInfo);
	std::cout << "Current day is:" << timestamp << std::endl;
}

Account::Account(void)
{
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account(void)
{
	_totalAmount -= _amount;
}

