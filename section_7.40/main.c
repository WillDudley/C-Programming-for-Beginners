/*
Note: Probs better to assign constants via #define
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	//Inputs: # hrs worked in a week (skipped for compatibility)
	float hrs = 45;
	int bpr = 12;
	double pay = 0;
	double net = 0;

	if ( hrs > 40) {
		pay = (40 * 12) + ((hrs - 40) * 12 * 1.5);
	} else {
		pay = (hrs * 12);
	}

	if (pay <= 300) {
		net = pay - (pay * 0.15);
	} else if (pay <= 450) {
		net = pay - ((300 * 0.15) + ((pay - 300) * 0.2));
	} else {
		net = pay - ((300 * 0.15) + (150 * 0.2) + ((pay - 450) * 0.25));
	}


	printf("$ %.2lf\n", net);

	return 0;
}