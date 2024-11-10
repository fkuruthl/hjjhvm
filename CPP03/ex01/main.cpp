/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 01:04:07 by fkuruthl          #+#    #+#             */
/*   Updated: 2024/11/10 01:21:32 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() 
{

    ScavTrap st1;
    ScavTrap st2("Warrior");
    ScavTrap st3(st2);

    st1.attack("p1");
    st2.attack("P2");
    st2.attack("P3");

    st2.takeDamage(10);
    st3.takeDamage(40);

    st2.beRepaired(5);
    st3.beRepaired(4);

    st1.guardGate();
    st2.guardGate();
    
    return 0;

}

