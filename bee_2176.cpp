#include <iostream>

int main()
{

    std::string mensagem;
    short i, cont = 0;

    std::cin >> mensagem;

    for (i = 0; i < (short)mensagem.length(); i++)
    {
        if (mensagem[i] == '1')
        {
            cont++;
        }
    }

    if (cont % 2 == 0)
    {
        mensagem.push_back('0');
    }
    else
    {
        mensagem.push_back('1');
    }

    std::cout << mensagem << std::endl;

    return 0;
}
