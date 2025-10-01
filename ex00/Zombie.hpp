/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salah <salah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:06:35 by salhali           #+#    #+#             */
/*   Updated: 2025/10/01 16:53:35 by salah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie
{
    private:
        std::string name; // donc hna 3ndi foo (dirct init);
    public:
        Zombie(std::string string);
        ~Zombie();
        void announce( void );
};

Zombie* newZombie(std::string name ); // heap allocation
void randomChump( std::string name ); // stack allocation

#endif
