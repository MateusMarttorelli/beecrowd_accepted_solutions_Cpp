#include <iostream>

int main()
{
    std::string str;

    getline(std::cin, str);

    if (str.length() <= 140)
    {
        std::cout << "TWEET" << std::endl;
    }
    else
    {
        std::cout << "MUTE" << std::endl;
    }

    return 0;
}
