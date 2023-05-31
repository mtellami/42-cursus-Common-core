/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:31:21 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/17 20:12:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <cstdint>
#include "Data.hpp"

class Serializer {
    private:
        Serializer(void);

    public:
        Serializer(const Serializer& obj);
        Serializer& operator=(const Serializer& obj);
        ~Serializer(void);

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif