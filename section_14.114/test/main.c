#include <stdio.h>
#include <stdlib.h>

/*
Finds number of lines of a file
- Open test file
- use fgetc to parse characters until get to EOF
- if EOF increment
*/


/*
int main()
{
    int count = 0;
    char c;
    FILE * pfile = NULL;
    char * filename = "test.txt";

    pfile = fopen(filename, "r");
    if (pfile == NULL)
    {
        return -1;
    }



    while (c = fgetc(pfile) != EOF)
    {
        if (c == "\n")
        {
            count++;
        }
        printf("%c", c);
    }

    printf("%i", count);


    return 0;
}
*/

int main () {
    FILE *fp;
    char c;
    int count = 0;

    fp = fopen("test.txt", "r");

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
