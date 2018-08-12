#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Firstly, use <string.h> to write a function that reverses a string.

Secondly, write a bubble sort algorithm.
*/

void reversal (char newString[], const char string[]) {
    int k;

    for (int i=0; i < strlen(string); i++)  //enumerates through the original string
    {
        k = strlen(string) - i;     //reverses the enumeration (e.g. for "Hello", k is 'o', then 'l', etc.
        newString[k] = string[i];   //adds the kth letter to the new string
    }
    printf("%s \n \n \n", newString);   //prints the new string
}

int main()
{
    char normalString[] = "Reverse me...";
    char reversedString[strlen(normalString)];

    reversal(reversedString, normalString);

    //Bubble Sort
    int numberOfStrings;
    printf("Enter number of strings: ");  //message
    scanf("%i", &numberOfStrings);        //gets number of strings from user
    //printf("%i \n", numberOfStrings); //check

    char strings[numberOfStrings][50];    //initialises array
    char inputString[50];                 //initialises input string
    int value;
    char dummyString[50];
    int counterArray[numberOfStrings];
    int counterArraySum = 0;

    for (int i = 0; i < numberOfStrings; i++)   //enumerates through array rows
    {
        printf("Enter string %i : ", (i+1));  //message
        scanf("%s", inputString);      //gets input string
        strncpy(strings[i], inputString, 49);  //transfers input string to ith row of array
    }

    while (counterArraySum < (numberOfStrings - 1))
    {
        counterArraySum = 0;

        //printf("Counter Array Sum: %i \n", counterArraySum);
        //printf("Number of Strings: %i \n", (numberOfStrings - 1));

        for (int i = 1; i < numberOfStrings; i++)   //a pass of the bubble sort
        {
            value = strcmp(strings[(i-1)], strings[i]);  //checks whether [i-1] is greater than [i]
            if (value > 0)                               //if it is...
            {
                strcpy(dummyString, strings[(i-1)]);     //store <- [i-1]
                strcpy(strings[(i-1)], strings[i]);      //[i-1] <- [i]
                strcpy(strings[i], dummyString);         //[i] <- [store]    (thus switching [i] and [i-1] )
                counterArray[(i-1)] = 0;
            } else
            {
                counterArray[(i-1)] = 1;
            }
        }
        for (int i = 1; i < numberOfStrings; i++)
        {
            if (counterArray[(i-1)] == 1)
            {
                counterArraySum++;
            }
        }
        //printf("Counter Array Sum: %i \n", counterArraySum);
        //printf("Number of Strings: %i \n", (numberOfStrings - 1));
    }

    for (int i = 0; i < numberOfStrings; i++)
    {
        printf("%s \n", strings[i]);
    }



    return 0;
}
