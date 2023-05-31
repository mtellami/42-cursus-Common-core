/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 07:38:21 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/18 22:50:35 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Copy constructor
ScalarConverter::ScalarConverter( const ScalarConverter& obj ) {
    *this = obj;
}

// Copy assignment operator
ScalarConverter& ScalarConverter::operator=( const ScalarConverter& obj ) {
    ( void )obj;
    return *this;
}

// Destructor
ScalarConverter::~ScalarConverter( void ) {
}

// Used functions
bool isChar( const std::string& literal ) {
	return literal.length() == 1 && std::isalpha(literal[0]) && std::isprint(literal[0]);
}

bool isInt( const std::string literal ) {
	int i = 0;
    if ( literal[i] == '-' || literal[i] == '+' )
        i++;
    for ( int j = i; j < (int)literal.length(); j++ ) {
        if ( !std::isdigit( literal[j] ) )
            return false;
    }
    return true;
}

bool isFloat( const std::string literal ) {
	if ( literal.find( '.' ) == std::string::npos || literal.find( '.' ) == 0
		|| literal.find( '.' ) == literal.length() - 2 || literal.back() != 'f' )
        return false;
    int i = 0, dot = 0;
    if ( literal[i] == '-' || literal[i] == '+' )
        i++;
    for ( int j = i; j < (int)literal.length() - 1; j++ ) {
        if ( literal[j] == '.' )
            dot++;
        if (( !std::isdigit(literal[i]) && literal[i] != '.') || dot > 1 )
            return false;
    }
    return true;
}

bool isDouble( const std::string literal ) {
	if ( literal.find( '.' ) == std::string::npos || literal.find( '.' ) == 0 
        || literal.find( '.' ) == literal.length() - 1 )
        return false;
    int i = 0, dot = 0;
    if ( literal[i] == '-' || literal[i] == '+' )
        i++;
    for ( int j = i; j < (int)literal.length(); j++ ) {
        if ( literal[j] == '.' )
            dot++;
        if (( !std::isdigit(literal[i]) && literal[i] != '.' ) || dot > 1 )
            return false;
    }
    return true;
}

bool isLiteral( const std::string literal ) {
	std::string literals[6] = {"nan", "nanf", "+inf", "-inf", "-inff", "+inff"};
	for (int i = 0; i < 6; i++) {
		if ( !literal.compare(literals[i]) )
			return true;
	}
    return false;
}

void print( const std::string literal , types conv) {
	// char ...........
	std::cout << "char: ";
	if (isLiteral( literal ) ||  (conv._n > 126 || conv._n < 0)) {
        std::cout << "Impossible";
    } else if ( !std::isprint( conv._n ) ) {
        std::cout << "None displayable";
    } else {
        std::cout << "'" << conv._c << "'";
    }
    std::cout << std::endl;

	// Int ...........
	std::cout << "int: ";
	if ( isLiteral( literal ) || conv._impossible
		|| (conv._f > 2147483647 || conv._f < -2147483648)
		|| (conv._d > 2147483647 || conv._d < -2147483648)) {
        std::cout << "Impossible";
    } else {
        std::cout << conv._n;
    }
    std::cout << std::endl;

	// Float ............
	std::cout << "float: ";
	if (conv._impossible) {
		std::cout << "Impossible";
	} else if (isLiteral(literal)) {
		if (literal[0] == '+' || literal[0] == '-') {
			std::cout << literal.substr(0, 4) << "f";
		} else {
			std::cout << literal.substr(0, 3) << "f";
		}
	} else {
		conv._f - static_cast< int > ( conv._f ) == 0 ? std::cout << conv._f << ".0f" : std::cout << conv._f << "f";	
	}
    std::cout << std::endl;

	// Double ...........
	std::cout << "double: ";
	if ( conv._impossible ) {
        std::cout << "Impossible";
	} else if (isLiteral(literal)) {
		if (literal[0] == '+' || literal[0] == '-') {
			std::cout << literal.substr(0, 4);
		} else {
			std::cout << literal.substr(0, 3);
		}
	} else {
		 conv._d - static_cast< int > ( conv._d ) == 0 ? std::cout << conv._d << ".0" : std::cout << conv._d;
    }
    std::cout << std::endl;
}

// Converter
void ScalarConverter::convert( const std::string literal ) {
	types	conv;

	conv._c = '\0';
	conv._n = -1;
	conv._f = 0.0f;
	conv._d = 0.0;
	conv._impossible = false;

    if (isChar( literal )) {
		conv._c = literal[0];
        conv._n = static_cast< int >( conv._c );
        conv._f = static_cast< float >( conv._c );
        conv._d = static_cast< double >( conv._c );
	} else if (isInt( literal )) {
		try {
			conv._n = std::stoi( literal );
		} catch (std::exception& e) {
			conv._impossible = true;
		}
        conv._f = static_cast< float >( conv._n );
        conv._d = static_cast< double >( conv._n );
        conv._c = static_cast< char >( conv._n );
	} else if (isFloat( literal )) {
		try {
    	    conv._f = std::stof( literal );
		} catch ( std::exception& e) {
			conv._impossible = true;
		}
        conv._n = static_cast< int >( conv._f );
        conv._d = static_cast< double >( conv._f );
        conv._c = static_cast< char >( conv._f );
	} else if (isDouble( literal )) {
		try {
    	    conv._d = std::stod( literal );
		} catch (std::exception& e) {
			conv._impossible = true;
		}
        conv._n = static_cast< int >( conv._d );
        conv._f = static_cast< float >( conv._d );
        conv._c = static_cast< char >( conv._d );
	} else if (!isLiteral( literal )) {
		std::cout << "Error: Unknown type" << std::endl;
        return;	
	}
	print( literal , conv);
}
