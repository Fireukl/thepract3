#include <stdio.h>
#include <stdlib.h>

int main() {
    float* ptr1 = (float*)malloc(sizeof(float));
    float* ptr2 = (float*)malloc(sizeof(float));
    float* ptr3 = (float*)malloc(sizeof(float));

    printf("Enter three numbers using space\n");
    scanf("%f %f %f", ptr1, ptr2, ptr3);
    printf("a = %f, b = %f, c = %f\n", *ptr1, *ptr2, *ptr3);

    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Value of ptr1: %.2f\n", *ptr1);
    printf("Value of ptr2: %.2f\n", *ptr2);
    printf("Value of ptr3: %.2f\n", *ptr3);

    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}
