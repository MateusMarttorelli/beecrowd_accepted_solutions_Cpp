#include <iostream>
#include <iomanip>

int main()
{
    short n, s, b, a, hit_s, hit_b, hit_a, s_total = 0, b_total = 0, a_total = 0, hit_s_total = 0, hit_b_total = 0, hit_a_total = 0;
    double perc_s, perc_b, perc_a;
    std::string nome;

    std::cin >> n;

    while (n--)
    {
        std::cin >> nome;
        std::cin >> s >> b >> a;
        std::cin >> hit_s >> hit_b >> hit_a;

        s_total += s;
        b_total += b;
        a_total += a;
        hit_s_total += hit_s;
        hit_b_total += hit_b;
        hit_a_total += hit_a;
    }

    perc_s = ((double)hit_s_total/s_total) * 100;
    perc_b = ((double)hit_b_total/b_total) * 100;
    perc_a = ((double)hit_a_total/a_total) * 100;


    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Pontos de Saque: " << perc_s << " %." << std::endl;
    std::cout << "Pontos de Bloqueio: " << perc_b << " %." << std::endl;
    std::cout << "Pontos de Ataque: " << perc_a << " %." << std::endl;

    return 0;
}
