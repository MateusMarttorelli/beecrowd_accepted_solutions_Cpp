#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

int main()
{
    int t, x, y, z, indice;
    char  gabarito[50], respostaDoJogador;
    std::string nome;
    std::vector<std::string> reprovados;

    while(scanf("%d", &t) != EOF)
    {
        for (int i = 0; i < t; i++)
        {
            scanf("%d %d=%d", &x, &y, &z);

            if (x+y == z)
            {
                gabarito[i] = '+';
            }
            else if (x-y == z)
            {
                gabarito[i] = '-';
            }
            else if (x*y == z)
            {
                gabarito[i] = '*';
            }
            else
            {
                gabarito[i] = 'I';
            }
        }

        for (int i = 0; i < t; i++)
        {
            std::cin >> nome;
            std::cin >> indice;
            std::cin >> respostaDoJogador;

            if (respostaDoJogador != gabarito[indice-1])
            {
                reprovados.push_back(nome);
            }
        }

        if (reprovados.size() == 0)
        {
            std::cout << "You Shall All Pass!" << std::endl;
        }
        else if (reprovados.size() == t)
        {
            std::cout << "None Shall Pass!" << std::endl;
        }
        else
        {
            sort(reprovados.begin(), reprovados.end());
            for (auto i = reprovados.begin(); i != reprovados.end(); i++)
            {
                if (i+1 == reprovados.end())
                {
                    std::cout << *i;
                }
                else
                {
                    std::cout << *i << " ";
                }

            }
            std::cout << std::endl;
        }

        reprovados.clear();
    }

    return 0;
}
