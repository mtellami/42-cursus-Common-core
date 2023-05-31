/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:47:34 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/07 04:29:07 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal {
	
	private :

		Brain *brain;

	public :
	
		Cat( void );
		Cat( const Cat &obj);
		Cat &operator=( const Cat &obj);
		~Cat( void );

		void makeSound( void ) const;
};

#endif