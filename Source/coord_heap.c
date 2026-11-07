#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct {
    int x;
    int y;
} coord;

// Функція для створення структури coord в heap
coord* create_coord_heap(int x, int y)
{
    coord *point = (coord*)malloc(sizeof(coord));
    if (point != NULL) {
        point->x = x;
        point->y = y;
    }
    return point;
}

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    // Виділення пам'яті в heap
    coord *point_heap1 = (coord*)malloc(sizeof(coord));
    if (point_heap1 == NULL) {
        printf("Помилка виділення пам'яті!\n");
        return 1;
    }

    // Заповнення змінних в структурі
    point_heap1->x = 10;
    point_heap1->y = 20;

    // Вивід змінних з структури
    printf("[Heap 1] point_heap1: x = %d, y = %d\n", point_heap1->x, point_heap1->y);

    // Створення екземпляру структури через функцію
    coord *point_heap2 = create_coord_heap(30, 40);
    if (point_heap2 != NULL) {
        printf("[Heap 2] point_heap2: x = %d, y = %d\n", point_heap2->x, point_heap2->y);
    }

    // Звільнення пам'яті
    free(point_heap1);
    free(point_heap2);

    return 0;
}