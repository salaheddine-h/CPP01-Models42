/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:32:48 by marvin            #+#    #+#             */
/*   Updated: 2026/01/09 17:32:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

// humanA is reference
class HumanA
{
    private:
        Weapon  &AK47;
        std::string name;
    public:
        HumanA(std::string new_name, Weapon &new_weapon);
        void    attack();
};

#endif