/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:32:48 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/30 23:16:47 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Constructor
PmergeMe::PmergeMe(void) {
}

// Copy constructor
PmergeMe::PmergeMe(const PmergeMe& obj) {
	*this = obj;
}

// Copy assignment operator
PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {
	if (this != &obj) {
		this->_vector = obj._vector;
		this->_list = obj._list;
	}
	return *this;
}

// Destructor
PmergeMe::~PmergeMe(void) {
}

// Utils
int stringToInt(const std::string& str) {
    std::istringstream iss(str);
    int value = 0;
    iss >> value;
    return value;
}

std::string convertIntToString(int number) {
    std::stringstream ss;
    ss << number;
    return ss.str();
}

bool isNumber(std::string str) {
	std::string::iterator it = str.begin();
	if (*it == '+')
		it++;
	if (it == str.end())
		return false;
	for (; it != str.end(); it++) {
		if (!std::isdigit(*it))
			return false;
	}
	int value = stringToInt(str);
	if (convertIntToString(value).compare(str))
		return false;
	return true;
}

// Member fucntions
void PmergeMe::parse(int argc, char **argv) {
	for (int i = 1; i < argc; i++) {
		std::string str = argv[i];
		if (!isNumber(str)) {
			std::cerr << "Error" << std::endl;
			exit(1);
		}
	}
	std::cout << "Before:	";
	for (int i = 1 ;i < argc; i++) {
		if (i == 6 && argc > 6) {
			std::cout << "[...]";
			break;
		}
		std::cout << argv[i] << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::sort(int argc, char **argv) {
	// Vector
	clock_t _time00 = clock();
	for (int i = 1; i < argc; i++) {
		std::string str = argv[i];
		_vector.insert(_vector.end(), stringToInt(str));
	}
	_vector = mergeInsertionSort(_vector);
	clock_t _time01 = clock();

	std::cout << "After:	";
	for (int i = 0; i < (int)_vector.size(); i++) {
		if (i == 5 && _vector.size() > 5) {
			std::cout << "[...]";
			break;
		}
		std::cout << _vector.at(i) << " ";
	}
	std::cout << std::endl;

	float _diff = ((float)_time01 - (float)_time00) / CLOCKS_PER_SEC * 1000000.0F;
	std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : "
		<< _diff << " us" << std::endl;

	// List
	_time00 = clock();
	for (int i = 1; i < argc; i++) {
		std::string str = argv[i];
		_list.insert(_list.end(), stringToInt(str));
	}
	_list = mergeInsertionSort(_list);
	_time01 = clock();

	_diff = ((float)_time01 - (float)_time00) / CLOCKS_PER_SEC * 1000000.0F;
	std::cout << "Time to process a range of " << _list.size() << " elements with std::list : "
		<<  _diff << " us" << std::endl;
}
