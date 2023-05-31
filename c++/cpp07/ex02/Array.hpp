/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:07:14 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/19 20:06:57 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {

    private:
        T*      _arr;
        size_t  _size;

    public:

        // Default constructor
        Array<T>(void) : _arr(new T[0]()), _size() {} 
        // Parameterized constructor
        Array<T>( unsigned int n) : _arr(new T[n]()), _size(n) {}
        // Copy constructor
        Array<T>(const Array& obj) : _arr(new T[obj._size]), _size(obj._size) {
            for(size_t i = 0; i < this->_size; i++)
                this->_arr[i] = obj._arr[i];
        }
        // Copy assignment operator
        Array<T>& operator=(const Array& obj) {
            if (this != &obj) {
                if (this->_arr)
                    delete this->_arr;
                this->_arr = new T[obj._size]();
                this->_size = obj._size;
                for (size_t i = 0; i < this->_size; i++)
                    this->_arr[i] = obj._arr[i];
            }
            return *this;
        }
        // Destructor
        ~Array<T>(void) {
            if (this->_arr)
                delete this->_arr;
        }
        // Subscript operator overload
        T const & operator[](unsigned int i) const {
            if (i >= _size)
                throw std::out_of_range("index is out of bounds");
            return _arr[i];
        }

		T& operator[](unsigned int i) {
            if (i >= _size)
                throw std::out_of_range("index is out of bounds");
            return _arr[i];
        }
        // Member functions
        size_t  size( void ) const { return _size; }
};

#endif