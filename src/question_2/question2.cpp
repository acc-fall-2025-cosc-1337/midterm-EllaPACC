#include "question2.h"

bool test_config()
{
    return true;
}

// Returns the number of points earned for `sold` widgets according to
// the store's points schedule.
int get_earned_points(int sold)
{
    if (sold <= 0) return 0;
    if (sold >= 16) return 15 * sold;
    if (sold >= 11) return 10 * sold;
    if (sold >= 6) return 5 * sold;
    // sold between 1 and 5
    return 1 * sold;
}