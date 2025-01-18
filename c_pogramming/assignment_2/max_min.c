#include <stdio.h>

int findMaximum(int a, int b);
int findMinimum(int a, int b);
int main() {
    int num1, num2;
    int max, min;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    max = findMaximum(num1, num2);
    min = findMinimum(num1, num2);
    printf("The maximum of %d and %d is %d\n", num1, num2, max);
    printf("The minimum of %d and %d is %d\n", num1, num2, min);
    return 0;
}
int findMaximum(int a, int b) {
    return (a > b) ? a : b;
}
int findMinimum(int a, int b) {
    return (a < b) ? a : b;
}