#include <iostream>
#include <cmath>

int main()
{
    short xf, yf, xi, yi, vi, r1, r2;
    double distanciaInicial, distanciaPercorrida;

    while ((scanf("%hd", &xf) != EOF))
    {
        std::cin >> yf >> xi >> yi >> vi >> r1 >> r2;

        distanciaInicial = sqrt(pow((xi - xf), 2) + pow((yi - yf), 2));
        distanciaPercorrida = vi * 1.5;

        if (distanciaPercorrida + distanciaInicial > r1 + r2)
        {
            std::cout << "N" << std::endl;
        }
        else
        {
            std::cout << "Y" << std::endl;
        }
    }

    return 0;
}
