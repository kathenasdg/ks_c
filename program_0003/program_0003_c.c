//
// #    #
// #   #     ##    #####  #    #  ######  #    #    ##     ####
// #  #     #  #     #    #    #  #       ##   #   #  #   #
// ###     #    #    #    ######  #####   # #  #  #    #   ####
// #  #    ######    #    #    #  #       #  # #  ######       #
// #   #   #    #    #    #    #  #       #   ##  #    #  #    #
// #    #  #    #    #    #    #  ######  #    #  #    #   ####
//
// Kathenas: Area calculation functioned with user input.
//
// Author(s): Kathenas Development Group (KDG), development.group@kathenas.org.
//
// License (SPDX): GPL-3.0-or-later
//
// License link (SPDX): https://spdx.org/licenses/GPL-3.0-or-later.html
//

#include <stdio.h>
#include <stdint.h>

//
// Delcare function that calculates the area given a width and length.
//
int32_t calculate_area(int32_t, int32_t);

int main()
{
    // Declare integer width and set value to 0, an invalid value.
    int32_t width = 0;
    // Declare integer length and set value to 0, an invalid value.
    int32_t length = 0;

    // Accept only integers greater than 0.
    while(width <= 0)
    {
        printf("Enter width: ");
        scanf("%d", &width);
    }   

    // Accept only integers greater than 0.
    while(length <= 0)
    {
        printf("Enter length: ");
        scanf("%d", &length);
    }

    // Output width, length and then the resulting area.
    printf("Width: %d multiplied by Length: %d equals Area: %d.\n", width, length, calculate_area(width, length));

    return 0;
}

//
// Function that calculates the area given a width and length.
//
// Inputs: width and length.
//
// Returns: area i.e. width multiplied by length.
//
inline int32_t calculate_area(int32_t _width, int32_t _length)
{
    return _width * _length;
}
