#include <iostream>

int main()
{
    short n, i, j;

    std::cin >> n;

    short** esquina = new short*[n+1];

    for (i = 0; i < n + 1; i++)
    {
        esquina[i] = new short[n+1];
    }

    for (i = 0; i < n + 1; i++)
    {
        for (j = 0; j < n + 1; j++)
        {
            std::cin >> esquina[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(esquina[i][j] + esquina[i+1][j] + esquina[i][j+1] + esquina[i+1][j+1] < 2)
            {
                std::cout << "U";
            }
            else
            {
                std::cout << "S";
            }

        }
        std::cout << std::endl;
    }

    return 0;
}
