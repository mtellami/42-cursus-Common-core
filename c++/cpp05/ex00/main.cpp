/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:42:45 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/14 16:03:14 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

    try {
        Bureaucrat obj("human", 141);
        obj.increment();
        std::cout << obj << std::endl;

    } catch ( std::exception &exeption ) {
        std::cerr << exeption.what() << std::endl;
    }

    return 0;
}
