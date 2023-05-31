/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 23:12:32 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/31 17:48:14 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {

	private :
	
			void debug( void );
			void info( void );
			void warning( void );
			void error( void );

	public  :

			Harl( void );
			~Harl( void );
			
			void complain( std::string level );
};

typedef void (Harl::*t_func)( void );

#endif