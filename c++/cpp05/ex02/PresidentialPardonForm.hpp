/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 05:21:29 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/13 05:32:22 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

    private :

        std::string _target;

        PresidentialPardonForm( void );

    public :

        PresidentialPardonForm( const std::string target );
        PresidentialPardonForm( const PresidentialPardonForm& obj );
        PresidentialPardonForm& operator=( const PresidentialPardonForm& obj );
        ~PresidentialPardonForm( void );

        void execute( const Bureaucrat& executor ) const;

};

#endif