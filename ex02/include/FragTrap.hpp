/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:21:36 by phwang            #+#    #+#             */
/*   Updated: 2025/03/16 22:17:09 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &toCopy);
	~FragTrap();
	
	const FragTrap &operator=(const FragTrap &toCopy);

	void highFivesGuys();
	
};

#endif