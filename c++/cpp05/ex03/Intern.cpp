/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 05:02:29 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/14 07:14:05 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// Constructor
Intern::Intern( void ) {
    _formNames[0] = "presidential pardon";
    _formNames[1] = "robotomy request";
    _formNames[2] = "shrubbery creation";

    _forms[0] = &Intern::_presidentialPardon;
    _forms[1] = &Intern::_robotomyRequest;
    _forms[2] = &Intern::_shrubberyCreation;
}

// Copy constructor
Intern::Intern( const Intern& obj ) {
    *this = obj;
}

// Copy assignment operator
Intern& Intern::operator=( const Intern& obj ) {
    ( void )obj;
    return *this;
}

// Destructor
Intern::~Intern( void ) {
}

// Member functions
AForm* Intern::_presidentialPardon( std::string target ) {
    return new PresidentialPardonForm( target );
}

AForm* Intern::_robotomyRequest( std::string target ) {
    return new RobotomyRequestForm( target );
}

AForm* Intern::_shrubberyCreation( std::string target ) {
    return new ShrubberyCreationForm( target );
}

AForm* Intern::makeForm( std::string name, std::string target) {

    for ( int i = 0; i < 3; i++ ) {
        if (!name.compare(_formNames[i])) {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*_forms[i])(target);
        }
    }
    
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    return NULL;
}
