#include "Zombie.hpp"

int main()
{
    Zombie* z = zombieHorde(3, "horde");

    if (z == NULL)
        return (1);
    for (int i = 0; i < 3; i++){
        z[i].announce();
    }
    delete [] z;
    return (0);
}
