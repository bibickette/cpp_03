/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:04:59 by phwang            #+#    #+#             */
/*   Updated: 2025/03/04 18:19:05 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	ClapTrap a("pouet");
	ScavTrap b("Michel");
	FragTrap c("Froggy");

	a.displayStatus();
	b.displayStatus();
	c.displayStatus();
	a.beRepaired(1);
	cout << endl;
	
	b.attack(a.getName());
	a.takeDamage(b.getAttackDmg());
	a.beRepaired(1);
	cout << endl;

	a.displayStatus();
	b.displayStatus();
	c.displayStatus();
	cout << endl;

	b.guardGate();
	c.highFivesGuys();
	cout << endl;
	
	b.displayStatus();
	c.displayStatus();
	cout << endl;

	b.attack(c.getName());
	b.displayStatus();
	c.takeDamage(b.getAttackDmg());
	cout << endl;

	b.displayStatus();
	c.displayStatus();
	cout << endl;

	c.attack(b.getName());
	b.takeDamage(c.getAttackDmg());
	c.attack(b.getName());
	b.takeDamage(c.getAttackDmg());
	c.attack(b.getName());
	b.takeDamage(c.getAttackDmg());
	cout << endl;

	b.guardGate();
	cout << endl;

	b.displayStatus();
	c.displayStatus();
	
	return 0;
}
