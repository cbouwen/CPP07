#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<typename T, typename func>
void    iter(T* address, int length, func T2)
{
    for (int i = 0; i <length; i++)
        T2(address[i]);
}

class Iter
{
    private:

    protected:

    public:

};

#endif
