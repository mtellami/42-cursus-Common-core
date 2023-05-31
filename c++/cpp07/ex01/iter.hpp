/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:52:08 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/19 19:41:54 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array, size_t length, void (*f)(T const &)) {
	if (!array || !f)
		return;
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

#endif