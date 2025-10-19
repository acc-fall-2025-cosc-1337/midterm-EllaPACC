
#include <iostream>
#include <string>
#include <sstream>
#include "question4.h"

int main()
{
    std::string line;
    while (true) {
        std::cout << "Enter Celsius (or 'q' to quit): ";
        if (!std::getline(std::cin, line)) break;
        if (line.empty()) continue;
        if (line == "q" || line == "Q") break;

        std::istringstream iss(line);
        double c;
        if (!(iss >> c)) {
            std::cout << "Invalid input. Please enter a number or 'q'." << std::endl;
            continue;
        }

        double f = get_fahrenheit(c);
        std::cout << f << std::endl;
    }
    return 0;
}