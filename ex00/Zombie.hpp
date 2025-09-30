/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:06:35 by salhali           #+#    #+#             */
/*   Updated: 2025/09/30 18:07:46 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private :
    std::string name;
    
    public :
        Zombie(std::string jname) : name(jname) {};
        void    newZombie(); // white malloc and free 
        void    randomChump(std::string name); // whiteout malloc or free
        void announce(void) {};
        std::string getname() const
        {
            return(name);
        }
};

#endif