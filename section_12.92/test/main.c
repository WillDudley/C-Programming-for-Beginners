#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 12;
    int * px = &x;

    printf("Address of pointer: %p, \nValue of pointer: %p, \nValue of what the pointer points to: %i.",
           &px, px, *px);
}
