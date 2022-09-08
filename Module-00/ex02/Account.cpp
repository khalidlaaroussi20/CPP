
#include "Account.hpp"

//constructure
Account::Account( void )
{
	this ->_amount = 0;
	this ->_accountIndex = Account::_nbAccounts;
	this ->_nbDeposits = 0;
	this ->_nbWithdrawals = 0;
	Account::_nbAccounts++;
}

Account::Account( int initial_deposit )
{
	this ->_accountIndex = Account::_nbAccounts;
	this ->_nbDeposits = 0;
	this ->_nbWithdrawals = 0;
	Account::_nbAccounts++;
	this ->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this ->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}


void	Account::makeDeposit( int deposit )
{
	int p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this ->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount = this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this ->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this ->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal <<";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this ->_accountIndex  << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}


void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[";
	std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
	std::cout << (now->tm_year + 1900);
	if (now ->tm_mon < 10)
		std::cout << "0";
	std::cout << now ->tm_mon;
	if (now ->tm_mday < 10)
		std::cout << "0";
	std::cout << now ->tm_mday;
	std::cout << "_";
	if (now ->tm_hour < 10)
		std::cout << "0";
	std::cout << now ->tm_hour;
	if (now ->tm_min < 10)
		std::cout << "0";
	std::cout << now ->tm_min;
	if (now ->tm_sec < 10)
		std::cout << "0";
	std::cout << now ->tm_sec;
	std::cout << "]  "; 
}


Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this ->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}
