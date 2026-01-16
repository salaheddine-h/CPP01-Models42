/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:36:38 by marvin            #+#    #+#             */
/*   Updated: 2026/01/09 17:36:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        //Weapon is class 

        Weapon club = Weapon("crude spiked club");
        // crude spiked club is just name the club in the class weapon

        HumanA zalija("Bob", club);
        // object zalij set the val bob in the  
        // set the bob by a string and set the club object by the refr
        zalija.attack();
        club.setType("some other type of club");
        zalija.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}