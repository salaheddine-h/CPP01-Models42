/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:35:35 by marvin            #+#    #+#             */
/*   Updated: 2026/01/09 18:35:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_weapon) 
: AK47(new_weapon), name(new_name)
{
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->AK47.getType() << std::endl;
}
