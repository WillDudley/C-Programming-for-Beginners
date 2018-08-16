#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len = 0;

    FILE * pfile = NULL;
    pfile = fopen("test.txt", "r+");
    if (pfile == NULL)
    {
        return -1;
    }

    fseek(pfile, 0, SEEK_END);
    len = ftell(pfile);
    if (len == 0)
    {
        return -1;
    }

    //printf("%i", len);

    for (int i = 1; i <= len; i++)
    {
        printf("%c", fgetc(pfile));
        fseek(pfile, -2, SEEK_CUR);
    }


    return 0;
}
