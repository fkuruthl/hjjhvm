/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:04:17 by fkuruthl          #+#    #+#             */
/*   Updated: 2024/11/10 09:27:42 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0) 
{
    std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) 
{
    std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    *this = src;
    std::cout << "ClapTrap " << this->name << " copy has been created!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
    if (this != &rhs) 
    { 
        this->name = rhs.name;
        this->hitPoints = rhs.hitPoints;
        this->energyPoints = rhs.energyPoints;
        this->attackDamage = rhs.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << name << " attacks " << target << " for " 
                  << attackDamage << " damage! (Energy left: " << --energyPoints << ")" << std::endl;
    }
    else
    {
        std::cout << name << " is out of energy! (Energy left: " << energyPoints << ")" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints < amount)
        hitPoints = 0;
    else
        hitPoints -= amount;

    std::cout << name << " takes " << amount << " damage! (HP left: " << hitPoints << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (hitPoints > 0 && energyPoints > 0) 
    {
        hitPoints += amount;
        std::cout << name << " repairs for " << amount << " HP! (HP: " << hitPoints 
                  << ") (Energy left: " << --energyPoints << ")" << std::endl;
    } 
    else 
    {
        std::cout << name << " is too broken to repair!" << std::endl;
    }
}
