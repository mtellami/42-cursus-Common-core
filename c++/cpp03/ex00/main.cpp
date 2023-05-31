/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 04:05:01 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/02 13:53:11 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap gBox1("robox_01");
	ClapTrap gBox2(gBox1);

	int _fire = 5;
	int _medKit = 2;

	gBox1.setDamage( _fire );
	gBox2.setDamage( _fire );

	gBox2.setName("robox_02");
	gBox1.attack(gBox2.getName());
	gBox2.takeDamage(_fire);
	gBox2.beRepaired(_medKit);

	return 0;
}
