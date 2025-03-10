/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:21:36 by phwang            #+#    #+#             */
/*   Updated: 2025/03/07 15:35:38 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
	const static unsigned int _static_hitPts;
	const static unsigned int _static_energyPts;
	const static unsigned int _static_attackDmg;

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &toCopy);
	~FragTrap();
	
	const FragTrap &operator=(const FragTrap &toCopy);

	void highFivesGuys();
	
};

#endif