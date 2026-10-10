//
// #    #
// #   #     ##    #####  #    #  ######  #    #    ##     ####
// #  #     #  #     #    #    #  #       ##   #   #  #   #
// ###     #    #    #    ######  #####   # #  #  #    #   ####
// #  #    ######    #    #    #  #       #  # #  ######       #
// #   #   #    #    #    #    #  #       #   ##  #    #  #    #
// #    #  #    #    #    #    #  ######  #    #  #    #   ####
//
// Kathenas: All about the sizeof, because sizeof matters.
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
    char test_char;
    int test_int;
    float test_float;
    double test_double;

    // sizeof() return 'size_t' so use of '%zu' is portable and safe.
    printf("Size of char: %zu\n", sizeof(test_char));
    printf("Size of int: %zu\n", sizeof(test_int));
    printf("Size of float: %zu\n", sizeof(test_float));
    printf("Size of double: %zu\n", sizeof(test_double));

    return 0;
}
