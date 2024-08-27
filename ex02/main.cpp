#include "Array.hpp"

int main()
{
    Array<int>  defaultArray;
   
    try
    {
        Array<int> array1(5);
        for (unsigned int i = 0; i < array1.size(); ++i)
        {
            array1[i] = i + 1;
        }

        Array<int> array2 = array1;
        array2[0] = 35;

        for (unsigned int i = 0; i < array1.size(); ++i)
        {
            std::cout << "array1[" << i << "] = " << array1[i] << std::endl;
        }

        for (unsigned int i = 0; i < array2.size(); ++i)
        {
            std::cout << "array2[" << i << "] = " << array2[i] << std::endl;
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Array<int> array(5);
        std::cout << "Trying to access index 10" << std::endl;
        std::cout << array[10] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}