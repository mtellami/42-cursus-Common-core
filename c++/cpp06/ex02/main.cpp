/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:42:19 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/17 18:32:06 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void) {

    Base *base = generate();

	std::cout << "Base one identify by pointer: "; identify(base);
	std::cout << "Base one identify by reference: "; identify(*base);

	delete base;

    return 0;
}
