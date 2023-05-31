/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 01:16:58 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/27 01:48:48 by mtellami         ###   ########.fr       */
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

#endif