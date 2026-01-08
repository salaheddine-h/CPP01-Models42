/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 22:18:47 by marvin            #+#    #+#             */
/*   Updated: 2026/01/08 22:35:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(char *string, std::string name )
{
    int N = atoi(string);
    if (N < 1)
    {
        std::cout << "A horde of Zombies must contain at least one Zombie!" << std::endl;
        return (NULL);
    }
    if(N > 100)
    {
        std::cout << "===============Error=================" << std::endl;
        std::cout << "\033[31mToo many Zombies! The maximum is 100.\033[0m" << std::endl;
        std::cout << "=====================================" << std::endl;
        return (NULL);
    }
    Zombie* horde = new Zombie[N];
    if (horde == NULL)
    {
        std::cout << "Allocation failed!" << std::endl;
        return (NULL);
    }
    for (int i = 0; i < N; i++){
        horde[i].setName(name);
    }
    return (horde);
}