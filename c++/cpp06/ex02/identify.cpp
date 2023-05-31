/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:42:30 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/03 18:27:56 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Undefined" << std::endl;
}

void identify(Base& p) {
    try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &e) {
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast &e) {
			try {
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast &e) {
				std::cout << "Undefined" << std::endl;
			}
		}
	}
}
