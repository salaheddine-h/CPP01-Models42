/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:36:11 by salhali           #+#    #+#             */
/*   Updated: 2025/10/01 16:32:07 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main()
{
    Zombie z1("foo");
    Zombie* z2 = newZombie("jii");

    std::cout<<"z1 = "<<z1.getstring()<<std::endl;
    std::cout<<"z2 = "<<z2<<std::endl;

    // z1.announce();
    // z2->announce();
    // randomChump("maa");
    // delete z2;
    return 0;
}

