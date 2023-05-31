/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:12:45 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/23 18:11:20 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>
#include <array>
#include <deque>

int main(void) {

    std::vector<int> vect;
    std::list<int> list;
	std::deque<int> deq;
	std::array<int ,10> arr;

	for (int i = 0; i < 10; i++) {
		vect.push_back(i + 1);
		list.push_back(i + 1);
		deq.push_back(i + 1);
		arr[i] = i + 1;
	}

    easyfind(vect, 13);
    easyfind(list, 5);
	easyfind(arr, 11);
	easyfind(deq, 8);

    return 0;
}
