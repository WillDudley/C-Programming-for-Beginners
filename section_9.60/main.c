#include "stdio.h"
#include "math.h"


//GCD algorithm
int gcd (int x, int y)
{
	int count;
	int divisor;

	
	if (x < y)
	{
		int count = x;
	} else
	{
		int count = y;
	}

	
	for (int i = 1; i < count; ++i)
	{
		if (x % i == 0 && y % i == 0)
		{
			divisor = i;
		}
	}

	return printf("%i \n", divisor);
}


//Abs. value algorithm
float absolute (float x) 
{
	if (x < 0)
	{
		return printf("%.2f \n", -x);
	} else
	{
		return printf("%.2f \n", x);
	}
}


//Sqrt algorithm
double squareroot (double x)
{
	double y;

	if (x >= 0)
	{
		y = sqrt(x);
		return printf("%.2g \n", y);
	} else
	{
		//return printf("%d \n", absolute((float) x));
		y = sqrt(-x);
		return printf("%.2g i \n", y);
	}
}


int main(int argc, char const *argv[])
{
	gcd(12,8);
	absolute(-4);
	absolute(5);
	squareroot(16);
	squareroot(-25);
	return 0;
}