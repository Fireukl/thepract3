#include <stdio.h>
#include <stdlib.h>

int main() {
    float* ptr1 = (float*)malloc(sizeof(float));
    float* ptr2 = (float*)malloc(sizeof(float));
    float* ptr3 = (float*)malloc(sizeof(float));

    *ptr1 = 1.5f; // Присваиваем произвольные значения
    *ptr2 = 2.5f;
    *ptr3 = 3.5f;

    // Меняем местами значения первых двух переменных
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Значение ptr1: %.2f\n", *ptr1);
    printf("Значение ptr2: %.2f\n", *ptr2);
    printf("Значение ptr3: %.2f\n", *ptr3);

    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}
