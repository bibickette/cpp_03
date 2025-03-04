/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:21:02 by phwang            #+#    #+#             */
/*   Updated: 2025/03/04 18:54:55 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

using std::cout;
using std::endl;

FragTrap::FragTrap() : ClapTrap("No_Name")
{
	_hitPts = 100;
	_energyPts = 100;
	_attackDmg = 30;
	cout << "\033[31mBasic FragTrap constructor called\033[0m" << endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPts = 100;
	_energyPts = 100;
	_attackDmg = 30;
	cout << "\033[31mParameter FragTrap constructor called for \033[0m" << _name << endl;
}

FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy._name)
{
	*this = toCopy;
}

FragTrap::~FragTrap() 
{
	cout << "\033[31mDestructor FragTrap called for \033[0m" << _name << endl;
}

const FragTrap &FragTrap::operator=(const FragTrap &toCopy)
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

void FragTrap::highFivesGuys()
{
	if ( _hitPts == 0)
	{ cout << "\033[32mFragTrap\033[0m " << _name << " is \033[31mdead\033[0m !" << endl;}
	else if(_energyPts > 0)
	{
		cout << "\033[32mFragTrap\033[0m " << _name << " is doing high fives" << endl;
		_energyPts -= 1;
	}
	else if (_energyPts == 0)
	{	cout << "\033[32mFragTrap\033[0m " << _name << " can't do anything, no \033[33menergy\033[0m !" << endl; return ; }
}
