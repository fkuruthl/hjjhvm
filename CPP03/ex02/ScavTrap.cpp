/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 01:30:39 by fkuruthl          #+#    #+#             */
/*   Updated: 2024/11/10 01:30:41 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
    *this = src;
    std::cout << "ScavTrap " << this->name << " has been copied!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs) 
{
    if (this != &rhs) 
    {
        ClapTrap::operator=(rhs);
        this->hitPoints = rhs.hitPoints;
        this->energyPoints = rhs.energyPoints;
        this->attackDamage = rhs.attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap " << this->name << " has been destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string &target) 
{
    if (this->hitPoints > 0 && this->energyPoints > 0) 
    {
        std::cout << this->name << " attacks " << target << " for " 
                  << this->attackDamage << " damage! (Energy left: " 
                  << --this->energyPoints << ")" << std::endl;
    } else 
    {
        std::cout << this->name << " is out of energy! (Energy left: " 
                  << this->energyPoints << ")" << std::endl;
    }
}

void ScavTrap::guardGate() 
{
    std::cout << this->name << " is now in Gatekeeper mode." << std::endl;
}
