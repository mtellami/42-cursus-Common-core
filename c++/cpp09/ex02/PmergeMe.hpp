/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:32:47 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/30 00:47:16 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <ctime>
#include <sstream>

class PmergeMe {
	private:
		std::vector<int> _vector;
		std::list<int> _list;
	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe& obj);
		PmergeMe& operator=(const PmergeMe& obj);
		~PmergeMe(void);

		void parse(int argc, char **argv);
		void sort(int argc, char **argv);
};

bool isNumber(std::string str);

// Sort template
template <typename T>
void	insertion(T& _container) {
	for (typename T::iterator it = ++_container.begin(); it != _container.end(); ++it) {
		int value = *it;
		typename T::iterator position = it;
		while (position != _container.begin() && *(--position) > value) {
			*it = *position;
			--it;
		}
		*it = value;
	}
}

template <typename T>
T&	merge(T& first, T& second) {
	T merge;

	if (first.size() + second.size() <= 15) {
		merge.insert(merge.end(), first.begin(), first.end());
		merge.insert(merge.end(), second.begin(), second.end());
		insertion(merge);
	} else {
		while (first.size() && second.size()) {
			if (*first.begin() > *second.begin()) {
				merge.insert(merge.end(), *second.begin());
				second.erase(second.begin());
			} else {
				merge.insert(merge.end(), *first.begin());
				first.erase(first.begin());
			}
		}
		while (first.size()) {
			merge.insert(merge.end(), *first.begin());
			first.erase(first.begin());
		}
		while (second.size()) {
			merge.insert(merge.end(), *second.begin());
			second.erase(second.begin());
		}
	}
	first = merge;
	return first;
}

template <typename T>
T mergeInsertionSort(T& _container) {
	if (_container.size() <= 5) {
		insertion(_container);
		return _container;
	}
	typename T::iterator middle = _container.begin();
	std::advance(middle, _container.size() / 2);

	T first(_container.begin(), middle);
	T second(middle, _container.end());

	first = mergeInsertionSort(first);
	second = mergeInsertionSort(second);

	return merge(first, second);
}

#endif