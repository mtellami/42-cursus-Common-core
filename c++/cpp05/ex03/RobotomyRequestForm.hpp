/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 05:49:53 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/13 05:57:07 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

    private :

        std::string _target;

        RobotomyRequestForm( void );

    public :

        RobotomyRequestForm( const std::string target );
        RobotomyRequestForm( const RobotomyRequestForm& obj );
        RobotomyRequestForm& operator=( const RobotomyRequestForm& obj );
        ~RobotomyRequestForm( void );

        void execute( const Bureaucrat& executor ) const;
};

#endif