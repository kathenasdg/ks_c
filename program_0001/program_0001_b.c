//
// #    #
// #   #     ##    #####  #    #  ######  #    #    ##     ####
// #  #     #  #     #    #    #  #       ##   #   #  #   #
// ###     #    #    #    ######  #####   # #  #  #    #   ####
// #  #    ######    #    #    #  #       #  # #  ######       #
// #   #   #    #    #    #    #  #       #   ##  #    #  #    #
// #    #  #    #    #    #    #  ######  #    #  #    #   ####
//
// Kathenas: Playing with variables.
//
// Author(s): Kathenas Development Group (KDG), development.group@kathenas.org.
//
// License (SPDX): GPL-3.0-or-later
//
// License link (SPDX): https://spdx.org/licenses/GPL-3.0-or-later.html
//

// Includes.
#include <stdio.h>
#include <stdint.h>

int main()
{
    // Age cannot be negative or an enourmous number, so 0 to 255 will do.
    uint8_t age = 17;
    printf("Your age is %d.\n", age);

    // Grade Point Average of student.
    float gpa = 2.5;
    printf("Your Grade Point Average is %.1f.\n", gpa);

    // Price of an individual apple for sale.
    float price_of_apple = 0.75;
    printf("The price of the apple is £%.2f.\n", price_of_apple);

    // Pi to 11 decimal places.
    double pi = 3.14159265359;
    // Default number of numerals after "3.". This truncates pi declared.
    printf("The value of pi is %lf.\n", pi);
    // A specified amount of numbers after "3." that satisifies pi decalred.
    printf("The value of pi is %.11lf.\n", pi);

    return 0;
}
