#include <stdio.h>

int main(int argc, char const *argv[])
{
	int variable = 5;
	const int * const pvariable = &variable;
	printf("Variable address: %p  \n", pvariable);
	printf("Variable value: %i  \n", *pvariable);

	variable = 7;
	printf("Variable value: %i  \n -------------------------- \n", *pvariable);

	const int variable2 = 12;
	int * const pvariable2 = &variable2;
	printf("Variable2 address: %p  \n", pvariable2);
	printf("Value that pvariable2 points to: %i  \n", *pvariable2);
  printf("Variable2 value: %i  \n", variable2);


  *pvariable2 = 17;
  printf("Variable2 address: %p  \n", pvariable2);
  printf("Value that pvariable2 points to: %i  \n", *pvariable2);
  printf("Variable2 value: %i  \n -------------------------- \n", variable2);

  int item = 25;
  const int * const pitem = &item;
  item = 32;

  printf("%i", *pitem);
}
