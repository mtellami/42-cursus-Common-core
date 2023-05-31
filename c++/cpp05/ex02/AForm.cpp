/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 00:41:54 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/14 04:27:50 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructor
AForm::AForm( std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false),
    _gradeToSign(gradeToSign),
    _gradeToExecute(gradeToExecute) {

    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooLowException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooHighException();
}

// Copy constructor
AForm::AForm( const AForm &obj )
    : _name(obj._name), _signed(obj._signed),
    _gradeToSign(obj._gradeToSign),
    _gradeToExecute(obj._gradeToExecute) {
}

// Copy assignment operator
AForm& AForm::operator=( const AForm& obj ) {
    this->_signed = obj._signed;
    return *this;
}

// Destructor
AForm::~AForm( void ) {
}

// Memeber function
std::string AForm::getName( void ) const {
    return this->_name;
}

bool AForm::getSigned( void ) const {
    return this->_signed;
}

int AForm::getGradeToSign( void ) const {
    return this->_gradeToSign;
}

int AForm::getGradeToExecute( void ) const {
    return this->_gradeToExecute;
}

void AForm::beSigned( const Bureaucrat& bureaucrat ) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    this->_signed = true;
}

// Exeptions
const char* AForm::GradeTooHighException::what( void ) const throw() {
    return "Grade too high";
}

const char* AForm::GradeTooLowException::what( void ) const throw() {
    return "Grade too low";
}

const char* AForm::FormNotSignedException::what( void ) const throw() {
    return "Form not signed";
}

// Insertion operator overloading
std::ostream& operator<<( std::ostream& os, const AForm& form ) {
    os << "Form : " << form.getName() << " is " << (form.getSigned() ? "signed" : "unsigned") << std::endl;
    os << "Grade to be signed : " << form.getGradeToSign() << std::endl;
    os << "Grade to be execute : " << form.getGradeToExecute();
    return os;
}
