#include <stdio.h>

void checkEvenOrOdd(int num);
int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    checkEvenOrOdd(number);
    return 0;
}
void checkEvenOrOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}
