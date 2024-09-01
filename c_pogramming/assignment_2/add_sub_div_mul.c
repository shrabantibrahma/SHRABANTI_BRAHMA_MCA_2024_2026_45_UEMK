#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int main() {
    int num1, num2;
    char operation;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            printf("Result: %d\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %d\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %d\n", multiply(num1, num2));
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", divide(num1, num2));
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
    }
    return 0;
}
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    return (float)a / b;
}
