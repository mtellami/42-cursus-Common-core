/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:42:25 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/18 20:05:13 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void) {
	srand(time(nullptr));
    int _random = rand() % 3;
    if (!_random)
        return new A;
    else if (_random % 2)
        return new B;
    else
        return new C;
}
