/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 22:03:51 by marvin            #+#    #+#             */
/*   Updated: 2026/01/08 22:37:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Usage: ./zombieHorde <number_of_zombies>" << std::endl;
        return(1);
    }
    Zombie* z = zombieHorde(argv[1], "Horde");
    if (z == NULL)
        return (1);
    for (int i = 0; i < atoi(argv[1]); i++)
    {
        z[i].announce();
    }
    delete [] z;
    return (0);
}
