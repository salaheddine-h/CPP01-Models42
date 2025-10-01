/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salah <salah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:36:11 by salhali           #+#    #+#             */
/*   Updated: 2025/10/01 16:49:53 by salah            ###   ########.fr       */
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

