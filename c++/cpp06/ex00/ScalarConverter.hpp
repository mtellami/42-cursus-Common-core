/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 07:38:18 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/18 21:44:13 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

typedef struct types {
	char	_c;
	int		_n;
	float	_f;
	double	_d;
	bool	_impossible;
}	types;

class ScalarConverter {

    private :
        ScalarConverter( void );

    public :
        ScalarConverter( const ScalarConverter& obj );
        ScalarConverter& operator=( const ScalarConverter& obj );
        ~ScalarConverter( void );

        static void convert( const std::string literal );
};

#endif
