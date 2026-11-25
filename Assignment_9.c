#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *src, *des;
    char ch;

    // Open source file in read mode
    src = fopen("source.txt", "r");

    if (src == NULL)
    {
        printf("Unable to open source file.");
        return 1;
    }

    // Open target file in write mode
    des = fopen("destination.txt", "w");

    if (des == NULL)
    {
        printf("Unable to open target file.");
        fclose(src);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, des);
    }

    printf("File copied successfully!");

    // Close both files
    fclose(src);
    fclose(des);

    return 0;
}
