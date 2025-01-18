#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int temp[n], k = 0;
    for (int i = 0; i < n; i++)
    {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++)
        {
            if (arr[i] == temp[j])
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate)
        {
            temp[k] = arr[i];
            k++;
        }
    }

    printf("Array after deleting duplicates:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", temp[i]);
    }
    printf("\n");
    return 0;
}