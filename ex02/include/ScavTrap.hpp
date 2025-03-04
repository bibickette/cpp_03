/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:54:34 by phwang            #+#    #+#             */
/*   Updated: 2025/03/04 19:35:39 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{	
protected:
	const static unsigned int _static_hitPts = 100;
	const static unsigned int _static_energyPts = 50;
	const static unsigned int _static_attackDmg = 20;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &toCopy);
	~ScavTrap();
	
	const ScavTrap &operator=(const ScavTrap &toCopy);

	void guardGate();
	void attack(const std::string& target);
};


#endif