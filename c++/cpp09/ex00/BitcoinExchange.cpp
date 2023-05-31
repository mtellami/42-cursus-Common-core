/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:28:37 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/29 21:53:53 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// .............. Date struct ..............
bool date::operator<(const  date& obj) const {
	return year * 365 + month * 30 + day < obj.year
		* 365 + obj.month * 30 + obj.day;
}

std::ostream& operator<<(std::ostream& os, const date& obj) {
	os << obj.year << "-"
		<< std::setfill('0') << std::setw(2) << obj.month << "-"
		<< std::setfill('0') << std::setw(2) << obj.day;
	return os;
}

// .............. BitcoinExchange ..............
BitcoinExchange::BitcoinExchange(void) {
	std::ifstream	_datafile("data.csv");
	std::string		_buffer;

	if (!_datafile.is_open()) {
		std::cerr << "Error: database not found" << std::endl;
		exit(1);
	}
	std::getline(_datafile, _buffer);
	while (std::getline(_datafile, _buffer)) {
		std::pair<date, float> pair(getPairKey(_buffer), getPairValue(_buffer));
		_database.insert(pair);
	}
	_datafile.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {
	*this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {
	if (this != &obj) {
		this->_database = obj.getDatabase();
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange(void) {
}

std::map<date, float> BitcoinExchange::getDatabase(void) const {
	return this->_database;
}

void BitcoinExchange::exchange(std::string input) {
	std::ifstream _infile(input);
	std::string _buffer;

	if (!fileCheck(input))
		return ;
	std::getline(_infile, _buffer);
	if (_buffer.find("date | value") != std::string::npos)
		std::getline(_infile, _buffer);
	while (true) {
		if (lineCheck(_buffer)) {
			date _date = getPairKey(_buffer);
			std::string _amount = _buffer.substr(13);
			float _result = calculateAmount(_date, _amount);				
			std::cout << _date << " => " << _amount << " = " << _result << std::endl;
		}
		if (!std::getline(_infile, _buffer))
			break ;
	}
}

float BitcoinExchange::calculateAmount(date _date, std::string _amount) {
	float amount = -1;
	amount = stringToType(_amount, amount);
	std::map<date, float>::iterator it;

	if (_database.find(_date) == _database.end())
	{
		it = _database.lower_bound(_date);
		if (it != _database.begin())
			it--;
	} else {
		it = _database.find(_date);
	}
	return (it)->second * amount;
}

// .............. Functions ..............

date getPairKey(std::string line) {
	date _date;
	int n = -1;
	_date.year = stringToType(line.substr(0, 4), n);
	_date.month = stringToType(line.substr(5, 2), n);
	_date.day = stringToType(line.substr(8, 2), n);
	return _date;
}

float getPairValue(std::string line) {
	float n = -1;
	return stringToType(line.substr(line.find(",") + 1), n);
}

bool isDate(std::string str) {
	int i = 0;
	for (; i < (int)str.size(); i++) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true; 
}

bool isFloat(std::string str) {
	int dot = 0, i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	for (; i < (int)str.size() ;i++) {
		if (str[i] == '.')
			dot++;
		if ((!std::isdigit(str[i]) && str[i] != '.') || dot > 1 )
            return false;
	}
	if (str[--i] == '.')
		return false;
	return true;
}

bool fileCheck(std::string input) {
	std::ifstream _infile(input);
	std::string _buffer;

	if (!_infile.is_open()) {
		std::cerr << "Error: could not open file" << std::endl;
		return false;
	}
	std::getline(_infile, _buffer);
	if (_buffer.empty()) {
		std::cerr << "Error: empty file" << std::endl;
		return false;
	}
	if (_buffer == "date | value") {
		if (!std::getline(_infile, _buffer)) {
			std::cerr << "Error: file contain header only" << std::endl;
			return false;
		}
	}
	else {
		std::cerr << "Error: invalid file header" << std::endl;
		return false;
	}
	_infile.close();
	return true;
}

bool lineCheck(std::string line) {
	float n = -1;
	if (line.length() < 14 
		|| !isDate(line.substr(0, 4)) || line[4] != '-'
		|| !isDate(line.substr(5, 2)) || line[7] != '-'
		|| !isDate(line.substr(8, 2)) || line.substr(10, 3) != " | "
		|| !isFloat(line.substr(13))) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return false;
	}
	date _date = getPairKey(line);
	if (_date.day > 31 || _date.month > 12 || _date.year > 2022
		|| (_date.month == 2 && _date.day > 28)) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return false;
	}
	n = stringToType(line.substr(13), n);
	if (n < 0) {
		std::cerr << "Error: not a possitive number." << std::endl;
		return false;
	} else if (n > 1000) {
		std::cerr << "Error: too large a number." << std::endl; 
		return false;
	}
	return true;
}
