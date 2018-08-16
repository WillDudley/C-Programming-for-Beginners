#include <stdio.h>

int main () {
    FILE *fp;
    char c;
    int count = 0;

    fp = fopen("README.txt", "r");

    if (fp == NULL)
    {
        perror("Error in opening file");
        return(-1);
    }

    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
        if (c == '\n')
            count++;
    }

    fclose(fp);
    fp = NULL;
    printf("\n Number of lines: %d", count);
    return(0);
}
