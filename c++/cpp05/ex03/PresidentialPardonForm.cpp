/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 05:21:27 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/14 04:30:13 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructor
PresidentialPardonForm::PresidentialPardonForm( const std::string target )
    : AForm( "PresidentialPardon", 25, 5 ), _target( target ) {
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& obj )
    : AForm( obj ), _target( obj._target ) {
}

// Copy assignment operator
PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& obj ) {
    ( void )obj;
    return *this;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm( void ) {
}

// Member functions
void PresidentialPardonForm::execute( const Bureaucrat& executor ) const {
    if ( executor.getGrade() > this->getGradeToExecute() )
        throw AForm::GradeTooLowException();
    else
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
