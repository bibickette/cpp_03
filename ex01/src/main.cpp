/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:04:59 by phwang            #+#    #+#             */
/*   Updated: 2025/03/16 13:23:41 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("pouet");
	ClapTrap c = a;
	ScavTrap b("Michel");
	ScavTrap d(b);

	c.attack(d.getName());
	d.displayStatus();
	d.guardGate();
	d.displayStatus();
	d.takeDamage(c.getAttackDmg());
	d.beRepaired(1);
	d.displayStatus();
	d.attack(c.getName());
	d.displayStatus();
	c.displayStatus();
	c.takeDamage(d.getAttackDmg());
	c.displayStatus();
	c.beRepaired(10);
	c.displayStatus();
	d.beRepaired(1);
	d.displayStatus();
	d.beRepaired(1);
	d.displayStatus();
	d.beRepaired(1);
	d.displayStatus();
	d.beRepaired(1);
	d.displayStatus();
	d.beRepaired(1);
	d.displayStatus();
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.displayStatus();
	d.attack(c.getName());
	c.beRepaired(1);
	return 0;
}
