/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:49:35 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/03 10:46:51 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#define RESET "\033[0m"
#define CYAN "\033[1;36m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define UNDERLINE "\033[4;37m"

class Contact
{
	private :

			int	index;
			std::string FirstName;
			std::string LastName;
			std::string Nickname;
			std::string PhoneNumber;
 			std::string DarkestSecret;

	public :
	
			Contact(void);
			~Contact(void);

			void	ListContact(void );
			void	ListOnTable( void );
			void	setContact( void );
};

std::string Trunc(std::string str);
std::string GetInput(std::string data);

#endif