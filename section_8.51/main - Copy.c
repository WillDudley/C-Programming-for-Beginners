/*
Primes to 100
 */

#include "stdio.h"

int main(int argc, char const *argv[])
{
	int primes[50] = {2, 3};  //initialises array
	int position = 2;  //initialises array position as 2


	for (int k = 2; k <= 100; ++k) {  //checks from number 2 to number 100
		if (k % 2 == 0) {
			continue;     //no need to check even numbers
		} else {
			for (int i = 3; i < k; ++i)   //enumerates i from 3 to k-1 (NB: division by 1 and 2 need to be ignored) and...
			{
				if (k % i == 0)   //...checks if k is divisible by any i - if true, break out this for loop
				{
					break;
				} else if (i == k - 1) {   //if false for all i from 3 to k-1...
					primes[position] = k;   //...adds k to the current position of the array, and...
					position++;  //...moves the position to the right
				}
			}
		}
	}
 
	for (int m=0; m < position; m++) {
		printf("%i \n", primes[m]);
	}

	return 0;
}