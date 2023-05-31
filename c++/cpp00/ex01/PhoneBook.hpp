/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:56:25 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/03 10:30:58 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	
	public :

			PhoneBook( void );
			~PhoneBook( void );

			void	add( void );
			void	search( void );
		
	private :

			int	NumberOfContacts;
			Contact	Contacts[8];
			
			
			void	ListPhoneBook( void );
};

#endif