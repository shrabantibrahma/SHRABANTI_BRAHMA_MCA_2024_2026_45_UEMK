#include <stdio.h>

int main()
{
    FILE *file_ptr;
    char filechar[40], ch;
    printf("Enter file name: ");
    scanf("%s", filechar);
    file_ptr = fopen(filechar, "r");
    if (NULL == file_ptr) {
        printf("File can't be opened \n");
    }
    printf("Content of the file are:-: \n");
    while ((ch = fgetc(file_ptr)) != EOF) {
        printf("%c", ch);
    }
    fclose(file_ptr);
    return 0;
}