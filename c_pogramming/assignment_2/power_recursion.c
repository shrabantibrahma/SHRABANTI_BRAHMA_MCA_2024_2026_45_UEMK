#include <stdio.h>

int power(int base, int exponent);
int main() {
    int base, exponent, result;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}
