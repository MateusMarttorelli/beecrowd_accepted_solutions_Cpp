#include <iostream>

int main()
{
    unsigned long long int p;

    while(std::cin >> p)
    {
        if (p == -1)
        {
            return 0;
        }
        else if (p == 0)
        {
            std::cout << "0" << std::endl;
        }
        else
        {
            std::cout << p - 1 << std::endl;
        }
    }

    return 0;
}
