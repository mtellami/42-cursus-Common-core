/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 05:23:03 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/07 23:04:53 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

    private:
    	AMateria* _materias[4];

    public:
        MateriaSource( void );
        MateriaSource( MateriaSource const &obj );
        MateriaSource&  operator=( MateriaSource const &obj );
        ~MateriaSource( void );

        AMateria* getMateria( std::string const & type );
        AMateria* createMateria( std::string const & type );
        void learnMateria( AMateria* );
};

#endif
