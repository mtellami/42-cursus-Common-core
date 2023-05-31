/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:42:37 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/14 04:26:58 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constrcutor
Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(grade) {
    if (_grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooHighException();
}

// Copy constructor
Bureaucrat::Bureaucrat( const Bureaucrat &obj ) : _name(obj._name), _grade(obj._grade) {
}

// Copy assignment operator
Bureaucrat& Bureaucrat::operator=( const Bureaucrat& obj) {
    this->_grade = obj._grade;
    return *this;
}

// Destructor
Bureaucrat::~Bureaucrat( void ) {}

// Member functions
std::string Bureaucrat::getName( void) const {
    return this->_name;
}

int Bureaucrat::getGrade( void ) const {
    return this->_grade;
}

void Bureaucrat::increment( void ) {
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooHighException();
    _grade++;
}

void Bureaucrat::decrement( void ) {
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooLowException();
    _grade--;
}

void Bureaucrat::signForm( AForm& form) {
    try {
        form.beSigned( *this );
        std::cout << *this << " signed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << _name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm( AForm const & form ) {
    try {
        form.execute( *this );
    } catch ( std::exception& e ) {
        std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

// Insertion operator overloading
std::ostream& operator<<( std::ostream& os, const Bureaucrat& obj ) {
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return os;
}

// Exeptions
const char* Bureaucrat::GradeTooHighException::what( void ) const throw() {
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw() {
    return "Grade too low";
}
