/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:31:29 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/17 20:03:57 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data {
    private:

		std::string _name;
		Data( void );

    public :
        Data(std::string name);
        Data(const Data& obj);
        Data& operator=(const Data& obj);
        ~Data(void);

		std::string getName( void ) const;
};

#endif