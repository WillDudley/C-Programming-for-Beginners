/*
Primes to 100
 */

#include "stdio.h"

int main(int argc, char const *argv[])
{
	int j = 3;
	int primes[j];  //variable array index j, extended whenever a prime is found
	primes[0] = 2;
	primes[1] = 3;

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
					primes[(j-1)] = k;   //adds k to the jth position of the array, and...
					j++;   //...extend the variable array by 1
					printf("%i \n", k);
				}
			}
		}
		printf("j = %i, k = %i \n", j, k);
	}
 
	for (int m=0; m < j; m++) {
		printf("%i \n", primes[m]);
	}

	return 0;
}