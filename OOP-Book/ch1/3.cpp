#include <iostream>
#include <ctype.h>


int main(int argc, char const *argv[])
{
    char c;
    std::cout << "Enter char: ";
    std::cin >> c;
    std::cout << islower(c) << std::endl;
    return EXIT_SUCCESS;
}
