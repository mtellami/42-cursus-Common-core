/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:42:39 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/14 04:26:25 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {

    private :

        const std::string _name;
        int _grade;

        Bureaucrat( void );

    public :

        Bureaucrat( const std::string name, int grade );
        Bureaucrat( const Bureaucrat &obj );
        Bureaucrat& operator=( const Bureaucrat &obj );
        ~Bureaucrat( void );

        std::string getName( void ) const;
        int getGrade( void ) const;

        void increment( void );
        void decrement( void );

        void signForm( AForm& form);

        void executeForm( AForm const & form );

        class GradeTooLowException : public std::exception {
            public :
                virtual const char* what() const throw();
        };
        class GradeTooHighException : public std::exception {
            public :
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<( std::ostream& os, const Bureaucrat &obj );

#endif