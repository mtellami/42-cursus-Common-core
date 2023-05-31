/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:45:24 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/18 19:04:30 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {

    public:
        virtual ~Base(void);

    private:
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif