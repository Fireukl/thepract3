#include <stdio.h>

int main() {
    int a, b;
    printf("Введите значение a: ");
    scanf("%d", &a);
    printf("Введите значение b: ");
    scanf("%d", &b);

    int* ptrA = &a;
    int* ptrB = &b;

    *ptrA *= 2; // Увеличиваем a в 2 раза
    *ptrB /= 2; // Уменьшаем b в 2 раза

    printf("Новое значение a: %d\n", a);
    printf("Новое значение b: %d\n", b);

    return 0;
}
