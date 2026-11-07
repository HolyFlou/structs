#include <stdio.h>
#include <windows.h>
#include "coord.h"

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    // Створення екземплярів структур та заповнення змінних в структурах
    coord point1;
    point1.x = 1;
    point1.y = 2;

    coord point2;
    point2.x = 5;
    point2.y = 10;

    // Вивід змінних з структур
    printf("Значення point1: x = %d, y = %d\n", point1.x, point1.y);

    printf("Значення point2: ");
    print_coord(point2);

    coord sum = add_coords(point1, point2);
    printf("Сума point1 та point2: ");
    print_coord(sum);

    return 0;
}
