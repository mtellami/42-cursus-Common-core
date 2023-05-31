/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 03:05:50 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/25 13:50:30 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int Account::getTotalAmount( void ) {
    return _totalAmount;
}

int Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

int		Account::checkAmount( void ) const {
	return _amount;
}

void	Account::_displayTimestamp( void )
{
	std::time_t time = std::time(NULL);
	std::tm* now = std::localtime(&time);

    std::cout << std::setfill('0') <<"[" << 1900 + now->tm_year
        << std::setw(2) << 1 + now->tm_mon
        <<  std::setw(2) << now->tm_mday <<  "_"
        <<  std::setw(2) << now->tm_hour
        <<  std::setw(2) << now->tm_min
        <<  std::setw(2) << now->tm_sec << "] ";
}

Account::Account( int initial_deposit )
{
	_nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:"
		<< _amount << ";" << "created" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts--;
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:"
		<< _amount << ";" << "closed" << std::endl << std::flush;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";" << "total:"
		<< getTotalAmount() << ";" << "deposits:" << getNbDeposits()
		<< ";" << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:"
		<< _amount << ";" << "deposits:" << _nbDeposits << ";"
        << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";";
    _amount += deposit;
    std::cout << "deposit:" << deposit << ";" << "amount:"
		<< _amount << ";" << "nb_deposit:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";" << "withdrawal:";
    if (withdrawal > checkAmount()) {
        std::cout << "refused" << std::endl;
        return false;
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    std::cout << withdrawal << ";" << "amount:" << _amount
		<< ";" << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}
