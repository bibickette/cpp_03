/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:42:18 by phwang            #+#    #+#             */
/*   Updated: 2025/03/07 15:38:15 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap() : ClapTrap("No_Name_clap_trap"), FragTrap("No_Name"), ScavTrap("No_Name"), _name("No_Name")
{
	cout << "\033[31mBasic DiamondTrap constructor called\033[0m" << endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), _name(name)
{
	_hitPts = FragTrap::_static_hitPts;
	_energyPts = ScavTrap::_static_energyPts;
	_attackDmg = FragTrap::_static_attackDmg;
	cout << "\033[31mParameter DiamondTrap constructor called for \033[0m" << _name << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy) : ClapTrap(toCopy._name + "_clap_name"), FragTrap(toCopy._name), ScavTrap(toCopy._name)
{
	*this = toCopy;
}

DiamondTrap::~DiamondTrap()
{ cout << "\033[31mDestructor DiamondTrap called for \033[0m" << _name << endl; }


const DiamondTrap &DiamondTrap::operator=(const DiamondTrap &toCopy)
{
	if(this != &toCopy)
	{
		_name = toCopy._name;
		_hitPts = toCopy._hitPts;
		_energyPts = toCopy._energyPts;
		_attackDmg = toCopy._attackDmg;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	cout << "My name is " << _name
		<< " and my ClapTrap name is " << ClapTrap::_name << endl;
}
