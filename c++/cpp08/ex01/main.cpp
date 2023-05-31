/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:11:05 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/25 17:44:25 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	std::vector<int> vect;
	Span sp(10);

	for (int i = 0; i < 10; i++)
		vect.insert(vect.end(), i + 1);

	try {
		sp.addNumber(-37);
		sp.addNumber(42);
		sp.addNumber(-21);
		sp.addNumber(13);
		// sp.addRange(vect.begin(), vect.end());

		for (_iterator it = sp.getVector().begin(); it != sp.getVector().end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;

		std::cout << "Sortest span: " << sp.shortestSpan() << std::endl;
    	std::cout << "Longest span " << sp.longestSpan() << std::endl;
		
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}

// int main()
// {
//     Span sp = Span(5);

//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);

//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;

//     return 0;
// }
