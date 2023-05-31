/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:56:00 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/29 23:40:01 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Constructor
RPN::RPN(void) {
}

// Copy constructor
RPN::RPN(const RPN& obj) {
	*this = obj;
}

// Copy assignment operator
RPN& RPN::operator=(const RPN& obj) {
	if (this != &obj) {
		this->_container = obj._container;
	}
	return *this;
}

// destructor
RPN::~RPN(void) {
}

// Member fcuntions
void RPN::calc(std::string input) {
	while (input.find(' ') != std::string::npos)
		input.erase(input.find(' '), 1);
	for (std::string::iterator it = input.begin(); it != input.end(); it++) {
		if (std::isdigit(*it)) {
			_container.push(*it - 48);
		} else if (!std::isdigit(*it) && _container.size() > 1) {
			float second = _container.top();
			_container.pop();
			float first = _container.top();
			_container.pop();
			switch (*it)
			{
			case '+':
				_container.push(first + second);
				break;
			case '-':
				_container.push(first - second);
				break;
			case '*':
				_container.push(first * second);
				break;
			case '/':
				if (!second) {
					std::cerr << "Error" << std::endl;
					return ;
				}
				_container.push(first / second);
				break;
			default:
				std::cerr << "Error" << std::endl;
				return ;
			}
		} else {
			std::cerr << "Error" << std::endl;
			return ;
		}
	}
	if (_container.size() > 1 || input.empty()) {
		std::cerr << "Error" << std::endl;
		return ;
	}
	std::cout << _container.top() << std::endl;
}
