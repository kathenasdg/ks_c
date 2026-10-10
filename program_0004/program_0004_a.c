//
// #    #
// #   #     ##    #####  #    #  ######  #    #    ##     ####
// #  #     #  #     #    #    #  #       ##   #   #  #   #
// ###     #    #    #    ######  #####   # #  #  #    #   ####
// #  #    ######    #    #    #  #       #  # #  ######       #
// #   #   #    #    #    #    #  #       #   ##  #    #  #    #
// #    #  #    #    #    #    #  ######  #    #  #    #   ####
//
// Kathenas: Float my boat and Double down.
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
    float boat = 1.11;
    double down = 2.222222222;

    // Default output of boat and down.
    printf("boat: %f.\n", boat);
    printf("down: %lf.\n", down);

    // Use '.n' to define number of decimal places to be outputted.
    printf("boat: %.2f.\n", boat);
    printf("down: %.8lf.\n", down);

    return 0;
}
