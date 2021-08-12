#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>

static int	_nbAccounts = 0;
static int	_totalAmount = 0;
static int	_totalNbDeposits = 0;
static int	_totalNbWithdrawals  = 0;

Account::Account( void )
{

}

Account::Account(int initial_deposit)
{

}

Account::~Account(void)
{

}

static void	_displayTimestamp( void )
{
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm time = *localtime(&time_now);
	std::cout << "[" << (time.tm_year + 1900)
			<< std::setw(2) << time.tm_mon
			<< std::setw(2) << time.tm_mday << "_"
			<< std::setw(2) << time.tm_hour
			<< std::setw(2) << time.tm_min
			<< std::setw(2) << time.tm_sec << "] ";
}

static void	displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << ";";
}

// void	makeDeposit( int deposit );
// bool	makeWithdrawal( int withdrawal );
// int		checkAmount( void ) const;
// void	displayStatus( void ) const;

static int	getNbAccounts( void )
{
	return (_nbAccounts);
}

static int	getTotalAmount( void )
{
	return (_totalAmount);
}

static int	getNbDeposits( void )
{
	return (_totalNbDeposits);
}

static int	getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
