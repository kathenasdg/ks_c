//
// #    #
// #   #     ##    #####  #    #  ######  #    #    ##     ####
// #  #     #  #     #    #    #  #       ##   #   #  #   #
// ###     #    #    #    ######  #####   # #  #  #    #   ####
// #  #    ######    #    #    #  #       #  # #  ######       #
// #   #   #    #    #    #    #  #       #   ##  #    #  #    #
// #    #  #    #    #    #    #  ######  #    #  #    #   ####
//
// Kathenas: Playing with outputting variables.
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
#include <stdbool.h>

int main()
{
    // Create integer age.
    int age = 21;
    // Create a randon price.
    float price = 18.99;
    // Create pi with double.
    double pi = 3.14159265359;
    // Create character currency.
    char currency = '$';
    // Create name string Kathenas.
    char name[] = "Kathenas";

    printf("Age: %d.\n", age);
    printf("Price: %.2f.\n", price);
    printf("Pi: %.11lf.\n", pi);
    printf("currency is %c.\n", currency);
    printf("Name: %s\n", name);

    return 0;
}
