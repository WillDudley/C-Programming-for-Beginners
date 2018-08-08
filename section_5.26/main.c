/*
Getting to grips with the enum data type.
 */


#include <stdio.h>

int main(int argc, char const *argv[])
{
	enum company {GOOGLE,FACEBOOK=5,XEROX,YAHOO,EBAY,MICROSOFT};

	enum company google = GOOGLE;
	enum company xerox = XEROX;
	enum company ebay = EBAY;

	printf("%i %i %i\n", google, xerox, ebay);


	return 0;
}