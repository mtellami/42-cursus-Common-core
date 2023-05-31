/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:31:19 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/16 21:06:44 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(std::string name) : _name(name) {
}

Data::Data(const Data& obj) {
    (void)obj;
}

Data& Data::operator=(const Data& obj) {
    (void)obj;
    return *this;
}

Data::~Data(void) {
}

std::string Data::getName( void) const {
	return this->_name;
}
