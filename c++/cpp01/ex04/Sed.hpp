/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:51:00 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/26 07:59:22 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

class Sed {
	
	private :
		std::string Infile;
		std::string Outfile;

	public :

			Sed ( std::string infile );
			~Sed ( void );

			void replace( std::string s1, std::string s2);
};

#endif