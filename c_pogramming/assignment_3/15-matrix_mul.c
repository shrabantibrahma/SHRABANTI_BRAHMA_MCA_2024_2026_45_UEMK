#include <stdio.h>
int main()
{
    int m1, n1, m2, n2;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &m1, &n1);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &m2, &n2);

    if (n1 != m2)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int matrix1[m1][n1], matrix2[m2][n2], product[m1][n2];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            product[i][j] = 0;
        }
    }
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < n1; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}