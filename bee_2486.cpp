#include <iostream>
#include <map>

int main()
{
    int t, n, total;
    std::string str;
    std::map<std::string, int> alimento;

    alimento[" suco de laranja"] = 120;
    alimento[" morango fresco"] = 85;
    alimento[" mamao"] = 85;
    alimento[" goiaba vermelha"] = 70;
    alimento[" manga"] = 56;
    alimento[" laranja"] = 50;
    alimento[" brocolis"] = 34;

    while (std:: cin >> t)
    {
        if (t == 0)
        {
            return 0;
        }

        total = 0;

        while (t--)
        {
            std::cin >> n;
            std::getline(std::cin, str);

            total += n * alimento[str];
        }

        if (total > 130)
        {
            std::cout << "Menos " << total - 130 << " mg" << std::endl;
        }
        else if (total < 110)
        {
            std::cout << "Mais " << 110 - total << " mg" << std::endl;
        }
        else
        {
            std::cout << total << " mg" << std::endl;
        }
    }

    return 0;
}
