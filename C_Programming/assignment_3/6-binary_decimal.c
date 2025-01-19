#include <stdio.h>
#include <math.h>
int main()
{
    int n, decimal = 0;
    printf("Enter the number of bits: ");
    scanf("%d", &n);
    int binary[n];

    printf("Enter the binary number:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &binary[i]);
    }

    for (int i = 0; i < n; i++)
    {
        decimal += binary[i] * pow(2, n - 1 - i);
    }

    printf("Decimal number: %d\n", decimal);
    printf("\n");
    return 0;
}