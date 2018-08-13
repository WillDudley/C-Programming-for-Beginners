#include <stdio.h>
#include <stdlib.h>

/*
This program takes a variable, and updates it with variable^2. It shows how pointers can be passed into functions to mimic global variables.
*/


/*************SCRAP*************
int x = 0;
int * px = &x;

void squarevars (int *px)
{
    printf("%p \n \n", px);
    printf("%i \n \n", *px);

    *px = (*px * *px);
    printf("%i \n \n", *px);
}


int main()
{
    x = 5;
    squarevars(px);
    printf("%p \n", px);
    printf("%p \n", &x);
    printf("%i \n", *px);
    printf("%i \n", x);
    return 0;
}
*******************************/

int x = 0;
int * px = &x;

void squarevars (int *px) //Passes in a POINTER
{
    *px = *px * *px; //Derefrenced pointer = derefrenced pointer * derefrenced pointer
}

int main ()
{
    x = 5;
    squarevars(px);
    printf("%i", x);  //Notice how even though function parameters are local (copies), the variable x is still updated - px still points to the same address!
}
