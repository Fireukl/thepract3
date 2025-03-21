#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);

    int* a = (int*)malloc(n * sizeof(int));
    printf("Введите элементы массива: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    int count = 0;
    double sum = 0.0;

    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            count++;
            sum += a[i];
            printf("Номер отрицательного элемента: %d\n", i);
        }
    }

    if (count > 0) {
        printf("Среднее арифметическое отрицательных элементов: %.2f\n", sum / count);
    } else {
        printf("Нет отрицательных элементов.\n");
    }

    free(a);

    return 0;
}
