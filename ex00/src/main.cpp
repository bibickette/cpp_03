/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:04:59 by phwang            #+#    #+#             */
/*   Updated: 2025/03/16 13:11:34 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	ClapTrap a("Pouet");
	ClapTrap b("Michmich");

	a.attack(b.getName());
	b.takeDamage(a.getAttackDmg());
	b.beRepaired(1);
	b.attack(a.getName());
	a.takeDamage(10);
	a.beRepaired(10);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.attack(a.getName());
	return 0;
}
