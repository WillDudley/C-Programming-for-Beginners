#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/*
Function that calculates the length of a string.
- Takes a const char pointer as parameter
- Uses pointer arithmetic and while loop
- Finds difference of pointer at string end and pointer at string start
- Returns int equal to strlen
*/
char string[50];
char * pstring = &string;

int length (const char *pstring)
{
    char * qstring = pstring;
    while (*qstring)
    {
        qstring++;
    }
    return qstring - pstring;
}

int main()
{
    char string[] = "Hello!";
    printf("%i \n", length(string));
    printf("%i \n", strlen(string));
    return 0;
}
