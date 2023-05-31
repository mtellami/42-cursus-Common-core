/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 06:18:03 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/14 04:43:07 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHERUBBERYCREATIONFORM_HPP
#define SHERUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {

    private :

        std::string _target;

        ShrubberyCreationForm( void );

    public :

        ShrubberyCreationForm( const std::string target );
        ShrubberyCreationForm( const ShrubberyCreationForm& obj );
        ShrubberyCreationForm& operator=( const ShrubberyCreationForm& obj );
        ~ShrubberyCreationForm( void );

        void execute( const Bureaucrat& executor ) const;
};

#endif