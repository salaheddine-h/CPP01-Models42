/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:06:35 by salhali           #+#    #+#             */
/*   Updated: 2026/01/11 16:18:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string string);
        ~Zombie();
        void announce( void );
};

Zombie* newZombie(std::string name ); // heap allocation
void randomChump( std::string name ); // stack allocation

#endif
