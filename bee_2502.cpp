#include <iostream>
#include <map>

int main()
{
    int c, n;
    std::string str1, str2, frase, fraseDescriptografada;

    while (std::cin >> c >> n)
    {
        std::multimap<char, char> cripto1, cripto2;

        std::cin.ignore();

        std::getline(std::cin, str1);
        std::getline(std::cin, str2);

        for (int i = 0; i < c; i++)
        {
            cripto1.insert(std::pair<char, char>(str1[i], str2[i]));
            cripto2.insert(std::pair<char, char>(str2[i], str1[i]));
        }

        while (n--)
        {
            std::getline(std::cin, frase);

            for (char i : frase)
            {
                char letra = (char)toupper(i);

                if (cripto1.count(letra) == 0 && cripto2.count(letra) == 0)
                {
                    fraseDescriptografada += i;
                }
                else if (cripto1.count(letra) != 0)
                {
                    if (isupper(i))
                    {
                        fraseDescriptografada += cripto1.find(letra)->second;
                    }
                    else
                    {
                        fraseDescriptografada += (char)tolower(cripto1.find(letra)->second);
                    }
                }
                else
                {
                    if (isupper(i))
                    {
                        fraseDescriptografada += cripto2.find(letra)->second;
                    }
                    else
                    {
                        fraseDescriptografada += (char)tolower(cripto2.find(letra)->second);
                    }
                }
            }

            std::cout << fraseDescriptografada << std::endl;
            fraseDescriptografada.clear();
        }
        std::cout << std::endl;
    }

    return 0;
}
