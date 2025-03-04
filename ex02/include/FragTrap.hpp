/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:21:36 by phwang            #+#    #+#             */
/*   Updated: 2025/03/04 19:32:52 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
	const static unsigned int _static_hitPts = 100;
	const static unsigned int _static_energyPts = 100;
	const static unsigned int _static_attackDmg = 30;

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &toCopy);
	~FragTrap();
	
	const FragTrap &operator=(const FragTrap &toCopy);

	void highFivesGuys();
	
};

#endif