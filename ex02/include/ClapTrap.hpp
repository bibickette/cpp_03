/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:07:24 by phwang            #+#    #+#             */
/*   Updated: 2025/03/07 15:34:46 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	const static unsigned int _static_hitPts;
	const static unsigned int _static_energyPts;
	const static unsigned int _static_attackDmg;
	
	std::string _name;
	unsigned int _hitPts;
	unsigned int _energyPts;
	unsigned int _attackDmg;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &toCopy);
	~ClapTrap();
	
	const ClapTrap &operator=(const ClapTrap &toCopy);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName();
	unsigned int getAttackDmg();

	void displayStatus();
};

#endif