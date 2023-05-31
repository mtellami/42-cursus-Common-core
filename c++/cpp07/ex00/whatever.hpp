/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:32:38 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/19 16:07:26 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const &min(T const &a, T const &b) {
	return a < b ? a : b;
}

template <typename T>
T const &max(T const &a, T const &b) {
	return a > b ? a : b;
}

#endif