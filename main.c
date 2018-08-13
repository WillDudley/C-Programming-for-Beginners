#include <stdio.h>
#include <stdlib.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')

int main(int argc, char const *argv[])
{
    //PART ONE
	signed int a = 60;
	signed int result = ~a;
	printf("Value of result using i: %i \n", result);
	printf("Value of result using u: %u \n", result);
	printf("Value of result using d: %d \n \n \n", result);


    //PART TWO
	printf("Binary representation of variable a "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(a));
	printf("\nBinary representation of variable result "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(result));

	/*
	//PART THREE
	signed int b = -12;
	signed int c = 5, d = 10;
	signed int e = c - d;
	printf("\n %i \n", b);
	printf("%i \n", e);
	*/
}
