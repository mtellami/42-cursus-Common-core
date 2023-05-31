/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:42:45 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/14 16:04:37 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("moad", 4);
        Form form("palas", 10, 15);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;

    } catch (std::exception &e) {

        std::cout << e.what() << std::endl;
    }

    return 0;
}
