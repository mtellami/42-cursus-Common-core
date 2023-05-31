/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:59:39 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/19 19:43:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void  print(T& x ) {
	std::cout << x << std::endl;
}

int main(void) {
    int arr[3] = {1, 2, 3};
    ::iter(arr, 3, print);

    std::string str[3] = {"string 00", "string 01", "string 02"};
    ::iter(str, 3, print);

    return 0;
}
