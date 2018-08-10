#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x1 = 1;
	char x2 = 'a';
	long x3 = 12;
	long long x4 = 13;
	double x5 = 16;
	long double x6 = 20;
	printf("int: %i, char: %i, long: %i, long long: %i, double: %i, long double: %i\n", sizeof(x1), sizeof(x2), sizeof(x3), sizeof(x4), sizeof(x5), sizeof(x6));
	return 0;
}