#include "whatever.hpp"

Whatever::Whatever()
{
    std::cout << "Default constructor called!" << std::endl;
}

Whatever::~Whatever()
{
    std::cout << "Destructor called!" << std::endl;
}

Whatever::Whatever(const Whatever& other) 
{
    *this = other;
    std::cout << "Copy constructor called!" << std::endl;
}

Whatever& Whatever::operator=(const Whatever &other)
{
    if(this != &other)
    {
    }
    return *this;
}


