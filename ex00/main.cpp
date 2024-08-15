#include "whatever.hpp"
#include <iostream>

int main()
{
    int a = 2;
    int b = 3;

    std::cout << GREEN << "Before Swap :\na = " << a << "\nb = " << b << std::endl;
    ::swap( a, b );
    std::cout << "After Swap :\na = " << a << "\nb = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << RESET << std::endl;


    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << YELLOW << "\nBefore swap :\nc = " << c << "\nd = " << d << std::endl;
    ::swap(c, d);
    std::cout << "After swap :\nc = " << c << "\nd = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << RESET << std::endl;

    return 0;

}