#include <iostream>

int main()
{
    short n, i, bonus, ataque_D, defesa_D, level_D, ataque_G, defesa_G, level_G;
    float golpe_D, golpe_G;

    std::cin >> n;

    for (i = 0; i < n; i++)
    {
        std::cin >> bonus;
        std::cin >> ataque_D >> defesa_D >> level_D;
        std::cin >> ataque_G >> defesa_G >> level_G;

        golpe_D = (ataque_D + defesa_D) / 2.0;
        golpe_G = (ataque_G + defesa_G) / 2.0;

        if (level_D % 2 == 0)
        {
            golpe_D *= 2;
        }

        if (level_G % 2 == 0)
        {
            golpe_G *= 2;
        }

        if (golpe_D > golpe_G)
        {
            std::cout << "Dabriel" << std::endl;
        }
        else if (golpe_D < golpe_G)
        {
            std::cout << "Guarte" << std::endl;
        }
        else
        {
            std::cout << "Empate" << std::endl;
        }
    }

    return 0;
}
