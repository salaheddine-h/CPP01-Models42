/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:36:11 by salhali           #+#    #+#             */
/*   Updated: 2026/01/16 08:49:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z1("foo");
    Zombie* z2 = newZombie("jii");

    z1.announce();
    z2->announce();
    randomChump("maa");
    delete z2;
    return 0;
}

