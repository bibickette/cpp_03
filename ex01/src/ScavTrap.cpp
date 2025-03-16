/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:02:33 by phwang            #+#    #+#             */
/*   Updated: 2025/03/16 13:32:16 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

using std::cout;
using std::endl;

const unsigned int ScavTrap::_static_hitPts = 100;
const unsigned int ScavTrap::_static_energyPts = 50;
const unsigned int ScavTrap::_static_attackDmg = 20;

ScavTrap::ScavTrap() : ClapTrap("No_Name")
{	
	_name = "No Name";
	_hitPts = _static_hitPts; 
	_energyPts = _static_energyPts;
	_attackDmg = _static_attackDmg;
	cout << "\033[31mBasic ScavTrap constructor called\033[0m" << endl; 
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{		
	_name = name;
	_hitPts = _static_hitPts; 
	_energyPts = _static_energyPts;
	_attackDmg = _static_attackDmg;
	cout << "\033[31mParameter ScavTrap constructor called for \033[0m" << _name << endl;
};

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy._name)
{
	cout << "\033[31mCopy ScavTrap constructor called for \033[0m" << toCopy._name << endl;
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
		<< " with special ScavTrap Attack ! causing \033[34m" << _attackDmg
		<< " points of damage\033[0m !" << endl;
	_energyPts -= 1;
}

