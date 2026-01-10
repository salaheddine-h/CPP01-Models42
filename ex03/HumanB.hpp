/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:33:12 by marvin            #+#    #+#             */
/*   Updated: 2026/01/09 17:33:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

// huamnB is pointer 

class HumanB
{
	private:
		Weapon		*AK47;
		std::string	name;
	public:
		HumanB(std::string new_name);
		void	setWeapon(Weapon &new_weapon);
        void	attack();
};

#endif
