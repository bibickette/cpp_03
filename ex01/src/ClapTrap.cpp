/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:09:45 by phwang            #+#    #+#             */
/*   Updated: 2025/03/07 15:35:22 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

using std::cout;
using std::endl;

const unsigned int ClapTrap::_static_hitPts = 10;
const unsigned int ClapTrap::_static_energyPts = 10;
const unsigned int ClapTrap::_static_attackDmg = 0;

ClapTrap::ClapTrap() : _name("No Name"), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	cout << "\033[31mBasic ClapTrap constructor called\033[0m" << endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	cout << "\033[31mParameter ClapTrap constructor called for \033[0m" << _name << endl;
};

ClapTrap::ClapTrap(const ClapTrap &toCopy)
{
	*this = toCopy;
}

ClapTrap::~ClapTrap() { cout << "\033[31mDestructor ClapTrap called for \033[0m" << _name << endl; }

const ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy)
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

unsigned int ClapTrap::getAttackDmg()
{
	return _attackDmg;
}

std::string ClapTrap::getName()
{
	return _name;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPts == 0)
	{ cout << "\033[35mClapTrap\033[0m " << _name << " is \033[31mdead\033[0m !" << endl; return ; }
	if (_energyPts == 0)
	{	cout << "\033[35mClapTrap\033[0m " << _name << " can't do anything, no \033[33menergy\033[0m !" << endl; return ; }
	cout << "\033[35mClapTrap\033[0m " << _name
		<< " attacks " << target 
		<< ", causing \033[34m" << _attackDmg
		<< " points of damage\033[0m !" << endl;
	_energyPts -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPts == 0)
	{ cout << "\033[35mClapTrap\033[0m " << _name << " is \033[31mdead\033[0m !" << endl; return ; }
	cout << "\033[35mClapTrap\033[0m " << _name
	<< " takes \033[34m" << amount 
	<< " points of damage\033[0m !" << endl;
	_hitPts -= amount;
	if(_hitPts == 0 || (int)(_hitPts - amount) < 0)
	{ _hitPts = 0; cout << "\033[35mClapTrap\033[0m " << _name << " \033[31mis now dead\033[0m :/" << endl; return ; }
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPts == 0)
	{ cout << "\033[35mClapTrap\033[0m " << _name << " is \033[31mdead\033[0m !" << endl; return ; }
	if (_energyPts == 0)
	{	cout << "\033[35mClapTrap\033[0m " << _name << " can't do anything, no \033[33menergy\033[0m !" << endl; return ; }
	cout << "\033[35mClapTrap\033[0m " << _name
	<< " repairs itself \033[32m" << amount 
	<< " hit points\033[0m, but losing " << "\033[33m1 point of energy !\033[0m" << endl;
	_hitPts += amount;
	_energyPts -= 1;
}

void ClapTrap::displayStatus()
{
	cout << _name 
	<< "\033[33m Energy : " << _energyPts
	<< "\033[0m, \033[32mHit Points : " << _hitPts
	<< "\033[0m, \033[34mattack dmg : " << _attackDmg << "\033[0m" << endl;
}
