/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:11:23 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/24 00:10:56 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

typedef std::vector<int> _container;
typedef _container::iterator _iterator;

class Span {

    private:
		_container _vector;
		unsigned int _size;

    public:
		Span( void );
		Span( unsigned int N );
		Span( const Span& obj );
		Span& operator=( const Span& obj );
		~Span( void );

        void addNumber( int n );
		void addRange( _iterator begin, _iterator end);

        int shortestSpan( void );
        int longestSpan( void );

		unsigned int getSize( void ) const;
		_container getVector( void ) const;
};

#endif