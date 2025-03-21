#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);

    int* ptrA = &a;
    int* ptrB = &b;

    *ptrA *= 2;
    *ptrB /= 2;

    printf("New value of a: %d\n", a);
    printf("New value of b: %d\n", b);

    return 0;
}
