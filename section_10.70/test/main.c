#include <stdio.h>
#include <stdlib.h>

//Length of string
int stringlength (char *string1) {
    unsigned int count = 1;
    for (int i = 0; string1[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

//Concatenate two strings
char concatenate (char *string1, char *string2) {
    int stringOneLength = stringlength(string1);
    int stringTwoLength = stringlength(string2);
    int newStringLength = stringOneLength + stringTwoLength;

    char newString[newStringLength];

    //printf("1: %i, 2: %i, 3: %i,  4: %i \n", stringlength(newString), stringlength(string1), stringlength(string2), newStringLength);

    for (int i = 0; i < (stringOneLength - 1); i++)
    {
        newString[i] = string1[i];
        //printf("5:  %c         ", newString[i]);
    }

    int counter;
    for (int i = 0; i < stringTwoLength; i++)
    {
        //printf("test");
        counter = i + stringOneLength;
        newString[counter] = string2[i];
        //printf("a)   %c \n", newString[counter]);
    }

    //printf("1: %i \n", stringlength(newString));

    printf("%s \n", newString);

    return *newString;
}


//Equality test
_Bool checkEquality (char *string1, char *string2) {
    /*
    if (
        for (i = 0; i < stringlength(string1); i++)
            {
            string1[i] == string2[i];
            } && stringlength(string1) == stringlength(string2))
        {
            return 1;
        } else
        {
            return 0;
        }
    */


    int stringOneLength = stringlength(string1);
    int stringTwoLength = stringlength(string2);
    int count = 0;

    for (int i = 0; i < stringlength(string1); i++)
        {
        if (string1[i] == string2[i])
        {
            count++;
        };
        }

    if (count == stringOneLength && stringOneLength == stringTwoLength)
    {
        return 1;
    } else
    {
        return 0;
    }

}


int main()
{
    char stringA[] = "Hello!";
    printf("%i \n", stringlength(stringA));
    char stringB[] = "Me!";
    //concatenate(stringA, stringB);
    printf("%c \n \n", concatenate(stringA, stringB));
    char stringC[] = "Hello!";
    printf("%i \n", checkEquality(stringA, stringB));
    printf("%i \n", checkEquality(stringA, stringC));

    return 0;
}
