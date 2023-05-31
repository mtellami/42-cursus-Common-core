/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:42:45 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/14 16:11:29 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
	try {
		Bureaucrat bureau("moad", 15);

		ShrubberyCreationForm sh("shrub");
		RobotomyRequestForm rb("robot");
		PresidentialPardonForm pr("Presid");

		std::cout << "------------------------------------" << std::endl;
		sh.beSigned(bureau);
		std::cout << sh << std::endl;
		bureau.executeForm(sh);

		std::cout << "------------------------------------" << std::endl;
		rb.beSigned(bureau);
		std::cout << rb << std::endl;
		bureau.executeForm(rb);

		std::cout << "------------------------------------" << std::endl;
		pr.beSigned(bureau);
		std::cout << pr << std::endl;
		bureau.executeForm(pr);

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

    return 0;
}
