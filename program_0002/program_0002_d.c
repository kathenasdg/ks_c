//
// #    #
// #   #     ##    #####  #    #  ######  #    #    ##     ####
// #  #     #  #     #    #    #  #       ##   #   #  #   #
// ###     #    #    #    ######  #####   # #  #  #    #   ####
// #  #    ######    #    #    #  #       #  # #  ######       #
// #   #   #    #    #    #    #  #       #   ##  #    #  #    #
// #    #  #    #    #    #    #  ######  #    #  #    #   ####
//
// Kathenas: Big integer madness.
//
// Author(s): Kathenas Development Group (KDG), development.group@kathenas.org.
//
// License (SPDX): GPL-3.0-or-later
//
// License link (SPDX): https://spdx.org/licenses/GPL-3.0-or-later.html
//

#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t w = 127;
    int16_t x = 32767;
    int32_t y = 2147483647;
    int64_t z = 9223372036854775807;

    printf("w equals: %d.\n", w);
    printf("x equals: %d.\n", x);
    printf("y equals: %d.\n", y);
    printf("z equals: %lld.\n", z);

    // You can do your own addition, subtraction or multiplication below.
    //
    // Research the *_t types, you may be intrigued. :-)

    return 0;
}
