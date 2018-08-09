#include <stdio.h>

int main(int argc, char const *argv[])
{
	double minutes = 60*24*365 + 4*60*24;
	double minutesInYear = 60*24*365;
	double minutesInDay = 60*24;

	printf("Enter minutes: ");

	scanf("%lf\n", &minutes);

	long int years = minutes / minutesInYear;

	// printf("%lf\n", years);

	double remainder = (int) minutes % (int) minutesInYear;

	double days = remainder / minutesInDay;
	
	printf("%.0lf minutes is equivalent to %i years and %.2lf days. \n", minutes, years, days);

	return 0;
}