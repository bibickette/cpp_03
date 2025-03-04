/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:04:59 by phwang            #+#    #+#             */
/*   Updated: 2025/03/04 17:18:39 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("pouet");
	ScavTrap b("Michel");

	a.attack(b.getName());
	b.displayStatus();
	b.guardGate();
	b.displayStatus();
	b.takeDamage(a.getAttackDmg());
	b.beRepaired(1);
	b.displayStatus();
	b.attack(a.getName());
	b.displayStatus();
	a.displayStatus();
	a.takeDamage(b.getAttackDmg());
	a.displayStatus();
	a.beRepaired(10);
	a.displayStatus();
	b.beRepaired(1);
	b.displayStatus();
	b.beRepaired(1);
	b.displayStatus();
	b.beRepaired(1);
	b.displayStatus();
	b.beRepaired(1);
	b.displayStatus();
	b.beRepaired(1);
	b.displayStatus();
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.displayStatus();
	b.attack(a.getName());
	a.beRepaired(1);
	return 0;
}
