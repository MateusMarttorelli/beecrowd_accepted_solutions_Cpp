#include <iostream>
#include <cmath>

int main()
{
    int lado[3], maior = 0;

    for (int i = 0; i < 3; i++)
    {
        std::cin >> lado[i];

        if (lado[i] > maior)
        {
            maior = lado[i];
        }
    }

    if (lado[0] + lado[1] + lado[2] - maior > maior)
    {
        if (lado[0] == lado[1] && lado[1] == lado[2])
        {
            std::cout << "Valido-Equilatero" << std::endl;
        }
        else if (lado[0] == lado[1] || lado[0] == lado[2] || lado[1] == lado[2])
        {
            std::cout << "Valido-Isoceles" << std::endl;
        }
        else
        {
            std::cout << "Valido-Escaleno" << std::endl;
        }

        if (pow(maior, 2) == pow(lado[0], 2) + pow(lado[1], 2) + pow(lado[2], 2) - pow(maior, 2))
        {
            std::cout << "Retangulo: S" << std::endl;
        }
        else
        {
            std::cout << "Retangulo: N" << std::endl;
        }
    }
    else
    {
        std::cout << "Invalido" << std::endl;
    }

    return 0;
}
