#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*
Read in file
Write file to newFile with condition if(lowercase){convert to uppercase by subtracting 32}
Close and delete file
Display newFile
Close newFile
*/


int main()
{
    FILE * pFile = NULL;
    FILE * pnewFile = NULL;
    char c = ' ';

    pFile = fopen("test.txt", "r");

    if (pFile == NULL)
    {
        perror("Error in opening file");
        return(-1);
    }


    pnewFile = fopen("newTest.txt", "w");

    if (pFile == NULL)
    {
        perror("Error in opening new file");
        return(-1);
    }


    while ((c = fgetc(pFile)) != EOF)
    {
        if (islower(c))
        {
            c = c - 32;  //converts LC to UC
        }
        fputc(c, pnewFile);
    }

    fclose(pFile);
    fclose(pnewFile);

    pnewFile = fopen("newTest.txt", "r");

    while ((c = fgetc(pnewFile)) != EOF)
    {
        printf("%c", c);
    }



    return 0;
}
