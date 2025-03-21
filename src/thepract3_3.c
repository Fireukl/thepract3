#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int* a = (int*)malloc(n * sizeof(int));
    printf("Enter the array elements using space: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    int count = 0;
    double sum = 0.0;

    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            count++;
            sum += a[i];
            printf("Number of the negative element: %d\n", i);
        }
    }

    if (count > 0) {
        printf("Arithmetic mean of negative elements: %.2f\n", sum / count);
    } else {
        printf("There are no negative elements.\n");
    }

    free(a);

    return 0;
}
