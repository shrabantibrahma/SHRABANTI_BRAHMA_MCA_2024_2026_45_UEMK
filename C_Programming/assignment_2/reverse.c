#include <stdio.h>

void reverseNumber(int num, int reversed);

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("The reverse of %d is: -", number);
        number = -number;
    } else {
        printf("The reverse of %d is: ", number);
    }
    reverseNumber(number, 0);
    return 0;
}
void reverseNumber(int num, int reversed) {
    if (num == 0) {
        printf("%d\n", reversed);
        return;
    } else {
        int lastDigit = num % 10;
        reversed = reversed * 10 + lastDigit;
        reverseNumber(num / 10, reversed);
    }
}
