/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 00:41:58 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/12 02:53:22 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    private :

        std::string _name;
        bool        _signed;
        const int   _gradeToSign;
        const int   _gradeToExecute;
        Form( void );

    public :

        Form( const std::string name, int gradeToSign, int gradeToExecute );
        Form( const Form &obj );
        Form& operator=( const Form &obj );
        ~Form( void );

        std::string getName( void ) const;
        bool getSigned( void ) const;
        int getGradeToSign( void ) const;
        int getGradeToExecute( void ) const;

        void beSigned( const Bureaucrat& bureaucrat );

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what( void ) const throw();
        };
        class GradeTooLowException : public std::exception {
            public :
                virtual const char* what( void ) const throw();
        };

};

std::ostream& operator<<( std::ostream& os, const Form& form );

#endif