#include <stdio.h>

int sumOfDigits(int num);
int main() {
    int number;
    int result;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0) {
        number = -number;
    }
    result = sumOfDigits(number);
    printf("The sum of the digits is %d\n", result);
    return 0;
}

int sumOfDigits(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + sumOfDigits(num / 10);
    }
}
