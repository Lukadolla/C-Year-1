#include <stdio.h>  //Importing libraries
#include <math.h>

int main ()
{
	int product, diastolic, systolic;  //Declaring variables
	
	printf("Please enter you diastolic followed by your systolic:\n");		//Prompting user to input their diastolic and systolic values
	scanf("%d%d", &diastolic, &systolic);
	
	if(diastolic > 90 || systolic > 140)			//Based on thse values, the state of their blood pressure will be printed
	{
		printf("The patient has High blood pressure\a");
	}
	
	else if(diastolic <= 60 || systolic <= 90)
	{
		printf("The patient has Low blood pressure\a");
	}

	else if(diastolic <= 90 || systolic <= 140)
	{
		printf("The patient has Pre-high blood pressure\a");	
	}
	
	else
	{
		printf("The patient has Ideal pressure\a");
	}

	return 0;
}
