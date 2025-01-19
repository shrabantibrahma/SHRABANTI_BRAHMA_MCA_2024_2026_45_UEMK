#include <stdio.h>

int main()
{
    FILE *sourceFile;
    FILE *destFile;
    char sourcePath[100];
    char destPath[100];

    char ch;

    
    printf("Enter source file path: ");
    scanf("%s", sourcePath);
    printf("Enter destination file path: ");
    scanf("%s", destPath);

    sourceFile  = fopen(sourcePath, "r");
    destFile    = fopen(destPath,   "w");

    if (sourceFile == NULL || destFile == NULL)
    {
        printf("\nUnable to open file.\n");
    }
    ch = fgetc(sourceFile);
    while (ch != EOF)
    {
        fputc(ch, destFile);
        ch = fgetc(sourceFile);
    }
    printf("\nFiles copied successfully.\n");
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}