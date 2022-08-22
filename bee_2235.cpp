#include <iostream>

int main()
{
    short a, b, c, maior;

    std::cin >> a >> b >> c;

    maior = a;

    if (b > maior)
    {
        maior = b;
    }
    if (c > maior)
    {
        maior = c;
    }

    if ((a == b || a == c || b == c) || maior == a + b + c - maior)
    {
        std::cout << "S" << std::endl;
    }
    else
    {
        std::cout << "N" << std::endl;
    }

    return 0;
}
