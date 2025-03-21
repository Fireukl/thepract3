#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the size of the array b: ");
    scanf("%d", &n);

    int* b = (int*)malloc(n * sizeof(int));
    printf("Enter the array elements b using space: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &b[i]);
    }

    double* c = (double*)malloc(n * sizeof(double));
    int c_size = 0; 

    for (int i = 0; i < n; ++i) {
        if (b[i] > 0) {
            c[c_size++] = sqrt(b[i]) / 5;
        }
    }

    for (int i = 0; i < c_size; i++) {
        int minIndex = i;
        for (int j = i + 1; j < c_size; j++) {
            if (c[j] < c[minIndex]) {
                minIndex = j;
            }
        }
        double temp = c[i];
        c[i] = c[minIndex];
        c[minIndex] = temp;
    }

    printf("Sorted array c: ");
    for (int i = 0; i < c_size; i++) {
        printf("%.2f ", c[i]);
    }
    
    free(b);
    free(c);

    return 0;
}
