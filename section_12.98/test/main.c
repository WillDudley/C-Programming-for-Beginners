#include <stdio.h>
#include <stdlib.h>

/*
INPUTS: String length <int>; String <char array>.
OUTPUT: String <char array>.

PURPOSE: Understand and use dynamic memory to optimise storage.
            FREE THE MEMORY AFTER USAGE
*/

int main()
{
    //Initialisation
    int lengthOfString = 0;
    char * pString = NULL;

    //Input length
    printf("Enter the length of your string: ");
    scanf("%i", &lengthOfString);

    //malloc for the string
    pString = (char*)calloc(lengthOfString, sizeof(char));

    //Input string
    printf("\nEnter your string: ");
    scanf("%s", pString);

    //Output string
    printf("\n ---------------------- \nYour string is: %s", pString);

    //Free memory
    free(*pString);





    return 0;
}
