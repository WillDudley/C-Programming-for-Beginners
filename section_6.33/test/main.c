#include <stdio.h>

int main(int argc, char const *argv[])
{
	long int minutes = 0;
	double minutesInYear = 60*24*365;
	double minutesInDay = 60*24;

	printf("Enter minutes: ");
	scanf("%d", &minutes);


	long int years = minutes / minutesInYear;

	// printf("%lf\n", years);

	double remainder = (int) minutes % (int) minutesInYear;

	double days = remainder / minutesInDay;

	printf("%d minutes is equivalent to %i years and %lf days. \n", minutes, years, days);

	return 0;
}
