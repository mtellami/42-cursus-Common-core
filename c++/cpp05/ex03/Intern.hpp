/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 05:28:37 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/14 07:12:22 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"


class Intern {

    private :

        typedef AForm* (Intern::*t_form)( std::string );

        std::string _formNames[3];
        t_form _forms[3];

        AForm* _presidentialPardon( std::string target );
        AForm* _robotomyRequest( std::string target );
        AForm* _shrubberyCreation( std::string target );

    public :

        Intern( void );
        Intern( const Intern& obj );
        Intern& operator=( const Intern& obj );
        ~Intern( void );

        AForm* makeForm( std::string name, std::string target );
};

#endif