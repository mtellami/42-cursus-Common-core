/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:41:47 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/25 17:52:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <queue>
#include <list>

// =================== main =====================

int main() {
	MutantStack<int> stack;

	for (int i = 0; i < 20; i++) {
		stack.push(i + 1);
	}

	for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	return 0;
}

// =================== Subject main =====================

// int main()
// {
// 	MutantStack<int> mstack;

// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << mstack.top() << std::endl;

// 	mstack.pop();

// 	std::cout << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);

// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();

// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);

// 	return 0;
// }
