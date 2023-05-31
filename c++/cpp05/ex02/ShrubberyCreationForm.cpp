/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 06:18:00 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/14 12:10:13 by mtellami         ###   ########.fr       */
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

    std::ofstream _file( _target + "_shrubbery" );
	std::string tree = 	"          &&& &&  & &&\n      && &\\/&\\|& ()|/ @, &&\n      &\\/(/&/&||/& /_/)_&/_&\n   &() &\\/&|()|/&\\/ '% & ()\n  &_\\_&&_\\ |& |&&/&__%_/_& &&\n&&   && & &| &| /& & % ()& /&&\n ()&_---()&\\&\\|&&-&&--%---()~\n     &&     \\|||\n             |||\n             |||\n             |||\n       , -=-~  .-^- _";
    _file << tree << std::endl;
    _file.close();
}
