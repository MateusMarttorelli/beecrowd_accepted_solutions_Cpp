#include <iostream>
#include <iomanip>

int main()
{
    float nota[7], maior, menor, soma, mult, result;
    short n;
    std::string nome;

    std::cin >> n;

    while (n--)
    {
        std::cin >> nome;
        std::cin >> mult;

        maior = 0;
        menor = 10;

        for (int i = 0; i < 7; i++)
        {
            std::cin >> nota[i];

            if (nota[i] > maior)
            {
                maior = nota[i];
            }
            if (nota[i] < menor)
            {
                menor = nota[i];
            }
        }

        soma = 0;

        for (int i = 0; i < 7; i++)
        {
            soma += nota[i];
        }

        soma -= maior;
        soma -= menor;

        result = soma * mult;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << nome << " " << result << std::endl;
    }

    return 0;
}
