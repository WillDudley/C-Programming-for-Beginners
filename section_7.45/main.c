/*
1. Input number (from 0-20)
2. Compare to answer
3. if T, win & STOP; if F, try again
4. if F 5 times, STOP
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int answer = 14;

	int input;

	for (int i = 4; i >= 0; --i) {
		input = 5; //scanf("%i", &input);

		if (input >= 20 || input <= 0) {
			printf("Pick between 0 and 20.\n");
			i++;
			continue;
		} else {
			if (input == answer) {
				printf("Correct!\n");
				return 0;
			} else {
				printf("Try again! ");
				if (i > 1) {
					printf("You have %i tries left.\n", i);
				}
				else if (i == 1) {
					printf("You only have 1 try left!\n");
				}
			}
		}
	}

	printf("Better luck next time!\n");
	return 0;
}