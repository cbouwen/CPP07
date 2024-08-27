#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>

class Array
{
    private:
        T               *_array;
        unsigned int    _size;
    protected:

    public:
        Array()
        {
            this->_array = new T[0];
            std::cout << "Created an empty array" << std::endl;
        }

        Array(unsigned int n)
        {
            this->_array = new T[n];
            _size = n;
            std::cout << "Created an array with size " << n << std::endl;
        }

        Array(const Array& other)
        {
            _array = NULL;
            _size = 0;
            *this = other;
        }

        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                delete[] _array;
                _size = other._size;
                if (_size > 0)
                {
                    _array = new T[_size];
                    for (unsigned int i = 0; i < _size; i++)
                        _array[i] = other._array[i];
                }
                else
                    _array = NULL;
            }
            return *this;       
        }

        ~Array()
        {
            delete[] _array;
        }

        T& operator[](unsigned int index)
        {
            if (index >= _size)
                throw InvalidIndexException();
            return _array[index];
        }

        class   InvalidIndexException: public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Error: Invalid index";
            }
        };

        unsigned int  size() const
        {
            return _size;
        }

};

#endif