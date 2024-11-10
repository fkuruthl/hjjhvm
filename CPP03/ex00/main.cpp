/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 00:23:29 by fkuruthl          #+#    #+#             */
/*   Updated: 2024/11/10 09:22:06 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() 
{
    ClapTrap defualt;
    ClapTrap clapTrap1("Jett");
    ClapTrap clapTrap2("Sage");

    clapTrap1.attack("Sage");
    clapTrap2.takeDamage(3);

    clapTrap2.attack("Jett");
    clapTrap1.takeDamage(2);

    clapTrap1.beRepaired(5);
    clapTrap2.beRepaired(4);

    int i = 0;
    while(i < 8)
    {
        clapTrap1.attack("Sage");
        clapTrap2.attack("Jett");
        i++;
    }
    clapTrap1.attack("Sage");
    clapTrap2.attack("Jett");

    return 0;
}
