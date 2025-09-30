/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:36:11 by salhali           #+#    #+#             */
/*   Updated: 2025/09/30 18:07:19 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <string.h>




// // void    Zombie::announce();
// int main()
// {
//     Zombie zombie("BraiiiiiiinnnzzzZ...");
    
//     zombie.announce();
//     std::cout<<"string = "<< zombie.getname()<<std::endl;
// }


#include "Zombie.hpp"

int main(){
    Zombie z1("foo");
    Zombie* z2 = newZombie("jii");

    z1.announce();
    z2->announce();
    randomChump("maa");
    delete z2;
    return 0;
}⏎ 
