/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:55:57 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/29 21:58:40 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN {
	private:
		std::stack<float> _container;

	public:
		RPN(void);
		RPN(const RPN& obj);
		RPN& operator=(const RPN& obj);
		~RPN(void);

		void calc(std::string input);
};

#endif