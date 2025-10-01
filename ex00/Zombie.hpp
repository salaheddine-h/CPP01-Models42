/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:06:35 by salhali           #+#    #+#             */
/*   Updated: 2025/10/01 16:31:24 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>


class Zombie

{
    private:
        std::string name; // donc hna 3ndi foo (dirct init); 
    public:
        Zombie(std::string string);
        ~Zombie();
        void announce( void );
        std::string    getstring() const
        {
            return(name);
        }
 
};

Zombie* newZombie(std::string name ) // heap allocation
{
    return new Zombie(name);
}
void randomChump( std::string name ); // stack allocation

#endif
