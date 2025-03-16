/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:04:59 by phwang            #+#    #+#             */
/*   Updated: 2025/03/16 20:33:38 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	ClapTrap a("pouet");
	ScavTrap b("Michel");
	FragTrap c("Froggy");
	cout << "------- now create the diamondtrap ------" << endl;
	DiamondTrap d("Pierre");
	
	d.whoAmI();
	b.displayStatus();
	c.displayStatus();
	d.displayStatus();
	
	d.guardGate();
	d.highFivesGuys();
	d.attack(c.getName());
	c.takeDamage(d.getAttackDmg());
	
	d.displayStatus();
	c.displayStatus();

	return 0;
}
