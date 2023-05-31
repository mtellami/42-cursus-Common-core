/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 00:47:03 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/07 02:15:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

	private :
		std::string ideas[100];
		
	public :
		Brain( void );
		Brain( const Brain &obj );
		Brain& operator=( const Brain &obj );
		~Brain( void );
};

#endif