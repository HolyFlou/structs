#include <stdio.h>
#include "coord.h"

void print_coord(coord point)
{
    printf("x = %d, y = %d\n", point.x, point.y);
}

coord add_coords(coord point1, coord point2)
{
    coord result;
    result.x = point1.x + point2.x;
    result.y = point1.y + point2.y;
    return result;
}