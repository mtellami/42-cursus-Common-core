/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:41:48 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/25 17:51:22 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T> {
	private:

	public:
		MutantStack( void ) {};
		MutantStack( const MutantStack& obj ) { *this = obj;};
		MutantStack& operator=( const MutantStack& obj ) {
			if (this != &obj)
				MutantStack::stack::operator=(obj);
			return *this;
		};
		~MutantStack( void ) {};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void) {return this->c.begin();};
		iterator end(void) {return this->c.end();};
};

#endif