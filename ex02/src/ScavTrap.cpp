/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:02:33 by phwang            #+#    #+#             */
/*   Updated: 2025/03/04 18:18:30 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

using std::cout;
using std::endl;

ScavTrap::ScavTrap() : ClapTrap("No name")
{	
	_name = "No Name";
	_hitPts = 100; 
	_energyPts = 50;
	_attackDmg = 20;
	cout << "\033[31mBasic ScavTrap constructor called\033[0m" << endl; 
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{		
	_name = name;
	_hitPts = 100; 
	_energyPts = 50;
	_attackDmg = 20;
	cout << "\033[31mParameter ScavTrap constructor called for \033[0m" << _name << endl;
};

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy._name)
{
	*this = toCopy;
};

ScavTrap::~ScavTrap() 
{	cout << "\033[31mDestructor ScavTrap called for \033[0m" << _name << endl; };

const ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy)
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

void ScavTrap::guardGate()
{
	if ( _hitPts == 0)
	{ cout << "\033[34mScavTrap\033[0m " << _name << " is \033[31mdead\033[0m !" << endl;}
	else if(_energyPts > 0)
	{
		cout << "\033[34mScavTrap\033[0m " << _name << " is now in \033[33mGate Keeper mode\033[0m" << endl;
		_energyPts -= 1;
	}
	else if (_energyPts == 0)
	{	cout << "\033[34mScavTrap\033[0m " << _name << " can't do anything, no \033[33menergy\033[0m !" << endl; return ; }
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPts == 0)
	{ cout << "\033[34mScavTrap\033[0m " << _name << " is \033[31mdead\033[0m !" << endl; return ; }
	if (_energyPts == 0)
	{	cout << "\033[34mScavTrap\033[0m " << _name << " can't do anything, no \033[33menergy\033[0m !" << endl; return ; }
	cout << "\033[34mScavTrap\033[0m " << _name
		<< " attacks " << target 
		<< ", causing \033[34m" << _attackDmg
		<< " points of damage\033[0m !" << endl;
	_energyPts -= 1;
}
