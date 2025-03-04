/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:04:59 by phwang            #+#    #+#             */
/*   Updated: 2025/03/04 19:39:48 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	ClapTrap a("pouet");
	ScavTrap b("Michel");
	FragTrap c("Froggy");
	DiamondTrap d("Kamas");
	
	d.whoAmI();
	b.displayStatus();
	c.displayStatus();
	d.displayStatus();
	
	d.attack(c.getName());
	c.takeDamage(d.getAttackDmg());
	
	d.displayStatus();
	c.displayStatus();

	return 0;
}
