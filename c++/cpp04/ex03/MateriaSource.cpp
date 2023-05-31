/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 05:23:06 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/07 23:54:32 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Default constructor
MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

// Copy constructor
MateriaSource::MateriaSource( const MateriaSource &obj ) {
	*this = obj;
}

// Copy assignment operator
MateriaSource& MateriaSource::operator=( const MateriaSource &obj ) {
	if (this != &obj) {
		for (int i = 0; i < 4; i++)
			this->_materias[i] = obj._materias[i];
	}
	return *this;
}

// Destructor
MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < 4 && this->_materias[i]; i++)
		delete this->_materias[i];
}

// Member function
AMateria* MateriaSource::getMateria( std::string const & type ) {
	for (int i = 0; i < 4; i++)
        if (_materias[i] && !type.compare(_materias[i]->getType()))
            return this->_materias[i];
    return NULL;
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
	for (int i = 0; i < 4; i++)
        if (_materias[i] && !type.compare(_materias[i]->getType()))
            return this->_materias[i]->clone();
    return NULL;
}

void MateriaSource::learnMateria( AMateria *m) {
	for (int i = 0; i < 4; i++)
        if (!_materias[i]) {
            this->_materias[i] = m;
            break ;
        }	
}
