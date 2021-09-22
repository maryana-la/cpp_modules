#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account ( int initial_deposit ) {
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    Account::_nbAccounts += 1;
    _amount = initial_deposit;
    Account::_totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";created" << std::endl;
}

int	Account::getNbAccounts( void ) {
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ){
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
    return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount();;
    std::cout << ";deposits:" << Account::getNbDeposits();
    std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;
    _amount += deposit;
    Account::_totalAmount += deposit;
    _nbDeposits += 1;
    Account::_totalNbDeposits += 1;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";withdrawal:";
    if (_amount - withdrawal < 0) {
        std::cout << "refused" << std::endl;
        return false;
    }
    else
        std::cout << withdrawal;

    _amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    _nbWithdrawals += 1;
    Account::_totalNbWithdrawals += 1;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

void	Account::_displayTimestamp(void){
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    std::cout << "[" << (now->tm_year + 1900);
    std::cout << std::setfill ('0') << std::setw(2) <<(now->tm_mon + 1);
    std::cout << std::setfill ('0') << std::setw(2) << now->tm_mday << "_";
    std::cout << std::setfill ('0') << std::setw(2) << (now->tm_hour);
    std::cout << std::setfill ('0') << std::setw(2) << (now->tm_min);
    std::cout << std::setfill ('0') << std::setw(2) << (now->tm_sec) << "] ";
}


Account::~Account () {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";closed" << std::endl;
    Account::_nbAccounts -= 1;
}