/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:44:18 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/11 15:58:24 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void ){
	this->_accountIndex = _nbAccounts;
	this->_amount = 0;
	_totalAmount += this->_amount;
	_nbAccounts++;

	Account::_displayTimestamp();
	std::cout <<
	"index:" << "\033[36m" << this->_accountIndex << "\033[0m" << ";"
	"amount:" << "\033[36m" << this->_amount << "\033[0m" << ";"
	<< "created" << std::endl;
}

Account::Account( int initial_deposit ){
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	_totalAmount += this->_amount;
	_nbAccounts++;

	Account::_displayTimestamp();
	std::cout <<
	"index:" << "\033[36m" << this->_accountIndex << "\033[0m" << ";"
	"amount:" << "\033[36m" << this->_amount << "\033[0m" << ";"
	<< "created" << std::endl;
}

Account::~Account( void ) {
	_nbAccounts--;

	Account::_displayTimestamp();
	std::cout <<
	"index:" << "\033[36m" << this->_accountIndex << "\033[0m" << ";"
	"amount:" << "\033[36m" << this->_amount << "\033[0m" << ";"
	<< "closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	if (_nbAccounts > 0)
	{
		Account::_displayTimestamp();
		std::cout <<
		"accounts:" << "\033[36m" << _nbAccounts << "\033[0m" << ";"
		"total:" << "\033[36m" << _totalAmount << "\033[0m" << ";"
		"deposits:" << "\033[36m" << _totalNbDeposits << "\033[0m" << ";"
		"withdrawals:" << "\033[36m" << _totalNbWithdrawals
		<< "\033[0m" << std::endl;
	}
}

void	Account::makeDeposit( int deposit ) {
	int	amount = this->_amount;
	
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	Account::_displayTimestamp();

	std::cout << 
	"index:" << "\033[36m" << this->_accountIndex << "\033[0m" << ";"
	<< "p_amount" << "\033[36m" << amount << "\033[0m" << ";"
	<< "deposit:" << "\033[36m" << deposit << "\033[0m" << ";"
	<< "amount:" << "\033[36m" << this->_amount << "\033[0m" << ";"
	<< "nb_deposits:" << "\033[36m" << this->_nbDeposits << "\033[0m" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if (this->_amount - withdrawal < 0)
	{
		Account::_displayTimestamp();
		std::cout << 
		"index:" << "\033[36m" << this->_accountIndex << "\033[0m" << ";"
		<< "p_amount" << "\033[36m" << this->_amount << "\033[0m" << ";"
		<< "withdrawal:" << "refused" << std::endl;
		return (false);
	}

	int	amount = this->_amount;

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	Account::_displayTimestamp();
	std::cout << 
	"index:" << "\033[36m" << this->_accountIndex << "\033[0m" << ";"
	<< "p_amount" << "\033[36m" << amount << "\033[0m" << ";"
	<< "withdrawal:" << "\033[36m" << withdrawal << "\033[0m" << ";"
	<< "amount:" << "\033[36m" << this->_amount << "\033[0m" << ";"
	<< "nb_withdrawals:" << "\033[36m" << this->_nbWithdrawals << "\033[0m" << std::endl;

	return (true);
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout <<
	"index:" << "\033[36m" << this->_accountIndex << "\033[0m" << ";"
	"amount:" << "\033[36m" << this->_amount << "\033[0m" << ";"
	"deposits:" << "\033[36m" << this->_nbDeposits << "\033[0m" << ";"
	"withdrawals:" << "\033[36m" << this->_nbWithdrawals
	<< "\033[0m" << std::endl;
}

void Account::_displayTimestamp() {
	std::time_t t = std::time(NULL);

	std::tm now = *localtime(&t);
	std::cout
	<< "["
	<< (now.tm_year + 1900)
	<< std::setfill('0')
	<< std::setw(2) << now.tm_mon + 1
	<< std::setw(2) << now.tm_mday << "_"
	<< std::setw(2) << now.tm_hour
	<< std::setw(2) << now.tm_min
	<< std::setw(2) << now.tm_sec
	<< "] ";
}