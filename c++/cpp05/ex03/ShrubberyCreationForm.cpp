/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 06:18:00 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/14 05:00:47 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructor
ShrubberyCreationForm::ShrubberyCreationForm( const std::string target)
    : AForm( "Shrubbery Creation", 145, 137 ), _target( target ) {
}

// Copy construcotr
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& obj )
    : AForm(obj), _target( obj._target ) {
}

// Copy assignment operator
ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& obj ) {
    ( void )obj;
    return *this;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
}

// Member functions
void ShrubberyCreationForm::execute( const Bureaucrat& executor ) const {
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    if (!this->getSigned())
        throw AForm::FormNotSignedException();

    std::ofstream _file( "<target>_shrubbery" );// file(this->getName() + "_shrubbery");
    _file << "ASCII Tree ..." << std::endl;
    _file.close();
}
