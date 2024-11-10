/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:21:21 by fkuruthl          #+#    #+#             */
/*   Updated: 2024/11/10 01:37:06 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
      FragTrap();
      FragTrap(const std::string &name);
      FragTrap(const FragTrap &copy);
      FragTrap &operator=(const FragTrap &other);
      ~FragTrap();
      void highFivesGuys(void);
};

#endif
