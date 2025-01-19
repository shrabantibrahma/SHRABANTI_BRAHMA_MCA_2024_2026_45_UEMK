#include <stdio.h>
int main()
{
    FILE *fileptr;
    char filechar[40];
    printf("Enter file name: ");
    scanf("%s", filechar);

    if (remove(filechar) == 0)
        printf("Deleted successfully \n");
    else
        printf("Unable to delete the file \n");
    return 0;
}