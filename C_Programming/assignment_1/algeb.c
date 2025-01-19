#include <stdio.h>
int main() {
int a, b, x;
float result;
printf("Enter the values of a, b and x: ");
scanf("%d %d %d", &a, &b, &x);
result = (a * x + b) / (a * x - b);
printf("Result = %.2f \n", result);
return 0;
}
