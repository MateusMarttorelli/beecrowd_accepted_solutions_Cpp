#include <iostream>
#include <iomanip>

int main()
{
    short h, p;

    std::cin >> h >> p;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << (float)h / p << std::endl;

    return 0;
}
