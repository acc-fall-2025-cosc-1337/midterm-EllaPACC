
#include <iostream>
#include <string>
#include <limits>
#include "question2.h"

int main()
{
    std::string line;
    while (true) {
        std::cout << "Enter number of widgets sold (or 'q' to quit): ";
        if (!std::getline(std::cin, line)) break; // EOF
        if (line.empty()) continue;
        if (line == "q" || line == "Q") break;

        // Validate integer input
        try {
            size_t idx = 0;
            int sold = std::stoi(line, &idx);
            if (idx != line.size()) {
                std::cout << "Invalid input -- please enter a whole number." << std::endl;
                continue;
            }

            int points = get_earned_points(sold);
            std::cout << "Points Earned " << points << std::endl;
        }
        catch (const std::invalid_argument &) {
            std::cout << "Invalid input -- please enter a whole number or 'q' to quit." << std::endl;
        }
        catch (const std::out_of_range &) {
            std::cout << "Number out of range -- try a smaller value." << std::endl;
        }
    }

    std::cout << "Goodbye." << std::endl;
    return 0;
}