#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void    swap(T& a, T& b)
{
    T   temp;

    temp = b;
    b = a;
    a = temp;
}

template <typename T>
T    min(T& a, T& b)
{
    if (a < b)
        return a;
    else
        return b;
}


template <typename T>
T    max(T& a, T& b)
{
    if (a > b)
        return a;
    else
        return b;
}

class Whatever
{
    private:

    protected:

    public:
        Whatever();
        Whatever(const Whatever& other);
        ~Whatever();
        Whatever& operator=(const Whatever& other);

};

#endif