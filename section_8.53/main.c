#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	float rainfall[5][12] = {  // Data of monthly averages for 2010-2014
	  {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
    {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
    {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
    {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
    {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
  

  //Yearly averages
  float yearsum[5] = {0,0,0,0,0};  
  float yearavg[5] = {0,0,0,0,0};

  for (int i = 0; i < 5; ++i)  //Step 3: enumerates rows
  {
  	for (int j = 0; j < 12; ++j)  // Step 1: sums columns
  	{
  	  yearsum[i] += rainfall[i][j];
  	}
  	yearavg[i] = yearsum[i] / 5;  //Step 2: gets avg of columns
  }


  //Monthly averages
  float monthsum[12] = {0,0,0,0,0};
  float monthavg[12] = {0,0,0,0,0};

  //printf("%i \n", monthsum[1]);
  for (int j = 0; j < 12; ++j)  
  {
  	//printf("2. %f \n", monthsum[j]);
  	for (int i = 0; i < 5; ++i)
  	{
  		//printf("3. monthsum presum is %f \n", monthsum[j]);
  		monthsum[j] += rainfall[i][j];
  		//printf("4. rainfall is %f \n", rainfall[i][j]);
  		//printf("5. monthsum postsum is %f \n", monthsum[j]);
  	}
  	//printf("6. monthsum after break is %f \n", monthsum[j]);
  	monthavg[j] = monthsum[j] / 5;
  	//printf("7. monthavg after avg is %f \n", monthavg[j]);

  }
  
  //Print yearly averages
  
  int year;

  for (int i = 0; i < 5; ++i)
  {
  	year = 2010 + i;
  	printf("The yearly average for %i is %.2lf \n", year, yearavg[i]);
  }
	

  //Print monthly averages
  int month;

  for (int i = 0; i < 12; ++i)
  {
  	month = 1 + i;
  	printf("The monthly average for month %i is %.2e \n", month, monthavg[i]);
  }


	return 0;
}