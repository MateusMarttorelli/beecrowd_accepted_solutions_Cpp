#include <iostream>

int main()
{
    short x;
    long m, e;

    while (true)
    {
        std::cin >> x >> m;

        if (x == 0 && m == 0)
        {
            break;
        }
        else
        {
            e = x * m;
            std::cout << e << std::endl;
        }

    }

    return 0;
}
