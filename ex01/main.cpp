#include "iter.hpp"

void    print(char& c)
{
    std::cout << c << std::endl;
}

void    toUpper(char &c)
{
    c = std::toupper(static_cast<char>(c));
}


int main()
{
    char    arr[] = {'a', 'b', 'c', 'd', 'e'};

    ::iter(arr, sizeof(arr) / sizeof(char), print);
    std::cout << std::endl;

    ::iter(arr, sizeof(arr) / sizeof(char), toUpper);
    ::iter(arr, sizeof(arr) / sizeof(char), print);

}