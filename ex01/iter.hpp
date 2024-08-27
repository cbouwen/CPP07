#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void    iter(T* address, int length, void (*func)(T&))
{
    for (int i = 0; i <length; i++)
        func(address[i]);
}

class Iter
{
    private:

    protected:

    public:
        //Constructors
        Iter();

        //Copy Constructor
        Iter(const Iter& other);

        //Destructor
        ~Iter();

        //Copy assignment operator
        Iter& operator=(const Iter& other);

};

#endif