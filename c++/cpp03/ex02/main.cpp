/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 04:05:01 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/05 23:52:35 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ( void )
{
	FragTrap gBox1("robox_01");
	FragTrap gBox2("robox_02");

	gBox1.highFivesGuys();
	gBox2.attack(gBox1.getName());
	gBox2.highFivesGuys();
	
	return 0;
}
