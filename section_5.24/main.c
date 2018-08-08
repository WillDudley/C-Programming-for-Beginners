#include <stdio.h>

int main(int argc, char const *argv[])
{
	double width = 5;
	double height = 10;
	double perim = 0.0;
	double area = 0.0;

	perim = 2 * (height + width);
	area = width * height;

	printf("The height is %.f. \n", height);
	printf("The width is %.3f. \n", width);
	printf("The perimeter is %f. \n", perim);
	printf("The area is %f. \n", area);
	return 0;
}