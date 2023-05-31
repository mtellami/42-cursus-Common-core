/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:47:34 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/06 09:04:27 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	
	private :

	public :
	
		Cat( void );
		Cat( const Cat &obj);
		Cat &operator=( const Cat &obj);
		~Cat( void );

		void makeSound( void ) const;
};

#endif