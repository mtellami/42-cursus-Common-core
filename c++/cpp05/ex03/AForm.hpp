/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 00:41:58 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/14 04:24:47 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

    private :

        std::string _name;
        bool        _signed;
        const int   _gradeToSign;
        const int   _gradeToExecute;

        AForm( void );

    public :

        AForm( const std::string name, int gradeToSign, int gradeToExecute );
        AForm( const AForm &obj );
        AForm& operator=( const AForm &obj );
        virtual ~AForm( void );

        std::string getName( void ) const;
        bool getSigned( void ) const;
        int getGradeToSign( void ) const;
        int getGradeToExecute( void ) const;

        void beSigned( const Bureaucrat& bureaucrat );

        virtual void  execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what( void ) const throw();
        };
        class GradeTooLowException : public std::exception {
            public :
                virtual const char* what( void ) const throw();
        };
        class FormNotSignedException : public std::exception {
            public :
                virtual const char* what( void ) const throw();
        };

};

std::ostream& operator<<( std::ostream& os, const AForm& form );

#endif