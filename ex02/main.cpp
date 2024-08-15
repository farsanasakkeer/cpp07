#include <iostream>
#include <stdexcept>
#include "Array.hpp"
#include "Array.tpp"

// #define MAX_VAL 10

int main()
{
    // Test 1: Default Construction
    Array<int> defaultArray;
    std::cout << YELLOW << "Default constructed array size: " << defaultArray.size() << RESET << std::endl;

     // Test 2: Parameterized Construction
    Array<int> array1(5);
    std::cout << "--------int array--------" << std::endl;
    std::cout << YELLOW << "Array1 created with size: " << array1.size() << RESET << std::endl;

    for (unsigned int i = 0; i < array1.size(); ++i)
    {
        array1[i] = i * 5;
    }

    std::cout << "Elements in array1:" << std::endl;
    for (unsigned int i = 0; i < array1.size(); ++i)
    {
        std::cout << "array1[" << i << "] = " << array1[i] << std::endl;
    }

    Array<char> array2(5);
    std::cout << "--------char array--------" << std::endl;
    std::cout << YELLOW << "array2 created with size: " << array2.size() << RESET << std::endl;
    for (unsigned int i = 0; i < array2.size(); ++i)
    {
        array2[i] = i + 'A';
    }

    std::cout << YELLOW << "Elements in Array2:\n-----------" << RESET << std::endl;
    for (unsigned int i = 0; i < array2.size(); ++i)
    {
        std::cout << YELLOW << "array2[" << i << "] = " << array2[i] << RESET << std::endl;
    }

    Array<char> array3(array2);
    std::cout << GREEN << "------Array3 (copy of array2)-------"<< RESET << std::endl;
    std::cout << YELLOW << "Elements in Array3:\n-----------" << RESET << std::endl;
    for (unsigned int i = 0; i < array3.size(); ++i)
    {
        std::cout << YELLOW << "array3[" << i << "] = " << array2[i] << RESET << std::endl;
    }

    Array<char> array4 = array2;
    std::cout << GREEN << "------array4 = array2-------"<< std::endl;
    std::cout << YELLOW << "Elements in array4:\n-----------" << RESET << std::endl;
    for (unsigned int i = 0; i < array4.size(); ++i)
    {
        std::cout << YELLOW << "array4[" << i << "] = " << array2[i] << RESET << std::endl;
    }

    try
    {
        array1[-1] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    try
    {
        array1[10] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    std::cout << YELLOW << "array4 modified" << RESET << std::endl;
    for (unsigned int i = 0; i < array4.size(); ++i)
    {
        array4[i] = i + 'a';
    }

    std::cout << YELLOW << "Elements in array4:\n-----------" << RESET << std::endl;
    for (unsigned int i = 0; i < array4.size(); ++i)
    {
        std::cout << YELLOW << "array4[" << i << "] = " << array4[i] << RESET << std::endl;
    }
}