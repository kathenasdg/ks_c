//
// #    #
// #   #     ##    #####  #    #  ######  #    #    ##     ####
// #  #     #  #     #    #    #  #       ##   #   #  #   #
// ###     #    #    #    ######  #####   # #  #  #    #   ####
// #  #    ######    #    #    #  #       #  # #  ######       #
// #   #   #    #    #    #    #  #       #   ##  #    #  #    #
// #    #  #    #    #    #    #  ######  #    #  #    #   ####
//
// Kathenas: Second adder.
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
    int a = 2;
    int b = 6;
    int c = 10;

    // Output sum of a, b and c.
    //
    // While correct, not my preferred method which is allocating sum to a
    // variable and then output or do further work on the sum elsewhere.
    printf("The sum of a, b and c is: %d.\n", a + b + c);

    return 0;
}
