#include <stdio.h>
int main()
{
    int decimal, i = 0;
    int binary[32]; // To store binary digits

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}