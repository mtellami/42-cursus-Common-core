/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:31:27 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/18 19:00:07 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(const Serializer& obj) {
    (void)obj;
}

Serializer& Serializer::operator=(const Serializer& obj) {
    (void)obj;
    return *this;
}

Serializer::~Serializer(void) {
}

uintptr_t Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}
