#include <iostream>

int main()
{
    int n, r[2] = {0, 0}, i, j = 0;

    std::cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            std::cin >> r[0];

            if (r[0] < r[1] && j == 0)
            {
                j = i;
            }
        }
        else
        {
            std::cin >> r[1];

            if (r[1] < r[0] && j == 0)
            {
                j = i;
            }
        }
    }

    std::cout << j << std::endl;

    return 0;
}
