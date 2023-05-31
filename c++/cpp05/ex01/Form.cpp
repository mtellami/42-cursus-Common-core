/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 00:41:54 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/13 15:37:35 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructor
Form::Form( std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false),
    _gradeToSign(gradeToSign),
    _gradeToExecute(gradeToExecute) {

    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

// Copy constructor
Form::Form( const Form &obj )
    : _name(obj._name), _signed(obj._signed),
    _gradeToSign(obj._gradeToSign),
    _gradeToExecute(obj._gradeToExecute) {
}

// Copy assignment operator
Form& Form::operator=( const Form& obj ) {
    this->_signed = obj._signed;
    return *this;
}

// Destructor
Form::~Form( void ) {
}

// Memeber function
std::string Form::getName( void ) const {
    return this->_name;
}

bool Form::getSigned( void ) const {
    return this->_signed;
}

int Form::getGradeToSign( void ) const {
    return this->_gradeToSign;
}

int Form::getGradeToExecute( void ) const {
    return this->_gradeToExecute;
}

void Form::beSigned( const Bureaucrat& bureaucrat ) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}

// Exeptions
const char* Form::GradeTooHighException::what( void ) const throw() {
    return "Grade too high";
}

const char* Form::GradeTooLowException::what( void ) const throw() {
    return "Grade too low";
}

// Insertion operator overloading
std::ostream& operator<<( std::ostream& os, const Form& form ) {
    os << "Form : " << form.getName() << " is " << (form.getSigned() ? "signed" : "unsigned") << std::endl;
    os << "Grade to be signed : " << form.getGradeToSign() << std::endl;
    os << "Grade to be execute : " << form.getGradeToExecute();
    return os;
}
	