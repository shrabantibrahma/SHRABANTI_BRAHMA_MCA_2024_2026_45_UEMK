#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < n; j++)
        {
            rowSum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, rowSum);
    }

    for (int j = 0; j < n; j++)
    {
        int colSum = 0;
        for (int i = 0; i < m; i++)
        {
            colSum += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, colSum);
    }

    return 0;
}