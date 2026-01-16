/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:31:18 by marvin            #+#    #+#             */
/*   Updated: 2026/01/10 14:31:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string new_T)
{
    this->type = new_T;
}

const std::string &Weapon::getType(void)
{
    return(this->type);
}

void    Weapon::setType(std::string new_T)
{
    this->type = new_T;
}
