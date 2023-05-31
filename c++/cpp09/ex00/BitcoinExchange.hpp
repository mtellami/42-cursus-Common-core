/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:27:09 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/29 20:33:28 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <cctype>
#include <sstream>

typedef struct date {
	unsigned int year;
	unsigned int month;
	unsigned int day;

	bool operator<(const date& obj) const;
} date;

std::ostream& operator<<(std::ostream& o, const date& obj);

// Type convert
template <typename T>
T stringToType(const std::string& str, T type) {
	std::stringstream ss(str);
	T num;
	ss >> num;
	type = num;
	return num;
}

class BitcoinExchange {
	private:
		std::map<date, float> _database;

	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& obj);
		BitcoinExchange& operator=(const BitcoinExchange& obj);
		~BitcoinExchange(void);

		std::map<date, float> getDatabase(void) const;

		float calculateAmount(date _date, std::string _amount);
		void exchange(std::string input);
};

bool fileCheck(std::string input);
date getPairKey(std::string line);
float getPairValue(std::string line);
bool isInt(std::string str);
bool isFloat(std::string str);
bool lineCheck(std::string line);

#endif