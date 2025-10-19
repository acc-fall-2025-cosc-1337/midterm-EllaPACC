#include "question3.h"
#include <cstdlib>
#include <ctime>

int roll_die()
{
    // rand() % 6 -> 0..5, +1 -> 1..6
    return (std::rand() % 6) + 1;
}

bool test_config()
{
    return true;
}