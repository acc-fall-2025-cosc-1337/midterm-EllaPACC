
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "question3.h"

int main()
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    std::string input;
    while (true) {
        std::cout << "Roll die? (Y to roll, any other key to quit): ";
        if (!std::getline(std::cin, input)) break;
        if (input.empty() || (input[0] != 'Y' && input[0] != 'y')) break;
        int result = roll_die();
        std::cout << "You rolled: " << result << std::endl;
    }
    std::cout << "Goodbye." << std::endl;
    return 0;
}