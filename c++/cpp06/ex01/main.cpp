/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:03:41 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/18 19:03:35 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data data("mtellami");

	uintptr_t serial = Serializer::serialize(&data);
	std::cout << "Data serial number: " << serial << std::endl;
 
	Data* obj = Serializer::deserialize(serial);
	std::cout << "Object name: " << obj->getName() << std::endl;

	return 0;
}
