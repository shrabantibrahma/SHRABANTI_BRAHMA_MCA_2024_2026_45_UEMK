#include <stdio.h>

void swapByValue(int a, int b);
void swapByReference(int *a, int *b);

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Before swap by value: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swap by value: x = %d, y = %d\n", x, y);
    printf("Before swap by reference: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swap by reference: x = %d, y = %d\n", x, y);
    return 0;
}

void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
