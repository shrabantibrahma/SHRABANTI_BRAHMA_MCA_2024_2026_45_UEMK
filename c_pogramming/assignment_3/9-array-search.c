#include <stdio.h>
int main()
{
    int n, search, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("Element %d found at position %d\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Element not found.\n");
    }

    return 0;
}