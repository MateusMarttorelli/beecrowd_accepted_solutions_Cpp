#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    if (n == 0)
    {
        std::cout << "E" << std::endl;
    }
    else if (n <= 35)
    {
        std::cout << "D" << std::endl;
    }
    else if (n <= 60)
    {
        std::cout << "C" << std::endl;
    }
    else if (n <= 85)
    {
        std::cout << "B" << std::endl;
    }
    else
    {
        std::cout << "A" << std::endl;
    }

    return 0;
}
