/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:36:11 by salhali           #+#    #+#             */
/*   Updated: 2025/09/28 17:04:48 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

class Zombie
{
    private :
    std::string name;
    
    public :
        Zombie(std::string jname) : name(jname) {};
        void    newZombie(); // white malloc and free 
        void    randomChump(); // whiteout malloc or free
        void announce(void) {};
        std::string getname() const
        {
            return(name);
        }
};


// void    Zombie::announce();
int main()
{
    Zombie zombie("BraiiiiiiinnnzzzZ...");
    
    zombie.announce();
    std::cout<<"string = "<< zombie.getname()<<std::endl;
}
