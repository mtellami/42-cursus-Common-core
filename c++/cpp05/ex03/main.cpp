/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:42:45 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/14 16:12:42 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

int main( void )
{
    Intern someRandomIntern;

    AForm* rb = someRandomIntern.makeForm("robotomy request", "Bender00");
    AForm* pr = someRandomIntern.makeForm("presidential pardon", "Bender01");
    AForm* sh = someRandomIntern.makeForm("shrubbery creation", "Bender02");
    AForm* none = someRandomIntern.makeForm("wrong_formName", "Bender03");

	std::cout << "-------------------------" << std::endl;
	std::cout << rb->getName() << std::endl;
    std::cout << *rb << std::endl;

	std::cout << "-------------------------" << std::endl;
	std::cout << pr->getName() << std::endl;
    std::cout << *pr << std::endl;

	std::cout << "-------------------------" << std::endl;
	std::cout << sh->getName() << std::endl;
    std::cout << *sh << std::endl;

	std::cout << "-------------------------" << std::endl;
	std::cout << none << std::endl;

    delete rb;
    delete pr;
    delete sh;

    return 0;
}
