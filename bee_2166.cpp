#include <iostream>
#include <iomanip>

int main()
{
    short n;
    double x = 0.0;

    std::cin >> n;

    while(n--)
    {
        x += 2;
        x = 1/x;
    }

    x++;

    std::cout << std::fixed << std::setprecision(10) << x << std::endl;

    return 0;
}
