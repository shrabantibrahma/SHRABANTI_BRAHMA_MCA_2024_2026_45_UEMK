#include <stdio.h>
typedef struct
{
    int real;
    int imag;
} complex;

complex add(complex c1, complex c2)
{
    complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

complex subtract(complex c1, complex c2)
{
    complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main()
{
    complex c1, c2, sum, diff;

    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%d %d", &c1.real, &c1.imag);
    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%d %d", &c2.real, &c2.imag);

    sum = add(c1, c2);
    diff = subtract(c1, c2);

    printf("Sum: %d + %di\n", sum.real, sum.imag);
    printf("Difference: %d + %di\n", diff.real, diff.imag);

    return 0;
}