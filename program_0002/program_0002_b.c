//
// #    #
// #   #     ##    #####  #    #  ######  #    #    ##     ####
// #  #     #  #     #    #    #  #       ##   #   #  #   #
// ###     #    #    #    ######  #####   # #  #  #    #   ####
// #  #    ######    #    #    #  #       #  # #  ######       #
// #   #   #    #    #    #    #  #       #   ##  #    #  #    #
// #    #  #    #    #    #    #  ######  #    #  #    #   ####
//
// Kathenas: Adder.
//
// Author(s): Kathenas Development Group (KDG), development.group@kathenas.org.
//
// License (SPDX): GPL-3.0-or-later
//
// License link (SPDX): https://spdx.org/licenses/GPL-3.0-or-later.html
//

#include <stdio.h>

int main()
{
    // Declare three individual integers to do addition with - a, b and c.
    int a = 10;
    int b = 15;
    int c = 30;

    // Declare integer to hold sum of a and b;
    int sum_of_a_and_b = a + b;
    // Output the sum of a and b.
    printf("The sum of a and b is: %d\n", sum_of_a_and_b);

    // Declare integer to hold sum of a, b and c.
    int sum_of_a_and_b_and_c = a + b + c;
    // Output sum of a, b and c.
    printf("The sum of a and b and c is: %d\n", sum_of_a_and_b_and_c);

    return 0;
}
