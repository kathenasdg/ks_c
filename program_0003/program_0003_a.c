//
// #    #
// #   #     ##    #####  #    #  ######  #    #    ##     ####
// #  #     #  #     #    #    #  #       ##   #   #  #   #
// ###     #    #    #    ######  #####   # #  #  #    #   ####
// #  #    ######    #    #    #  #       #  # #  ######       #
// #   #   #    #    #    #    #  #       #   ##  #    #  #    #
// #    #  #    #    #    #    #  ######  #    #  #    #   ####
//
// Kathenas: Area calculation.
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
    // Declare integer width and set value to 4.
    int32_t width = 4;
    // Declare integer length and set value to 8.
    int32_t length = 8;

    // Declare integer area and set value to width multiplied by length.
    int32_t area = width * length;
    // Output width, length and then the resulting area.
    printf("Width: %d multiplied by Length: %d equals Area: %d.\n", width, length, area);

    return 0;
}
