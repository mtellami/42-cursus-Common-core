/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:16:14 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/06 22:03:14 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	private :

	public :

		WrongCat( void );
		WrongCat( const WrongCat &obj );
		WrongCat& operator=( const WrongCat &obj );
		~WrongCat( void );

		void makeSound( void ) const;
};

#endif