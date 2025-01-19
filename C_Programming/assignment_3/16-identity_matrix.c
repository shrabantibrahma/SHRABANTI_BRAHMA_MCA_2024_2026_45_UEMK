#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);
    int matrix[n][n];
    int isIdentity = 1;

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
            {
                isIdentity = 0;
            }
        }
    }

    if (isIdentity)
    {
        printf("The matrix is an identity matrix.\n");
    }
    else
    {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}