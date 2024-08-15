#include "iter.hpp"

int main(void)
{
    int intArray[5] = {5,25,45,30,1};
	std::string stringArray[4] = {"abc", "dgrs", "4376", "zzzz"};

    std::cout << "---- int Array ----" << std::endl;
	iter<int>(intArray, 5, printElement);

	// std::cout << "---- int Array for square value ----" << std::endl;
	// iter<int>(intArray, 5, squareElement);

    // std::cout << "---- int Array ----" << std::endl;
	// iter<int>(intArray, 5, printElement);

	std::cout << "---- string Array ----" << std::endl;
	iter<std::string>(stringArray, 4, printElement);
}