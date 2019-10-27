#include <stdio.h>  //Importing libraries
#include <math.h>
int main ()
{
	int x, z, answer;		//Declaring variables
	char y;
	printf("Input a value: \n");		//Prompting user for input
	scanf(" %d", &x);
	printf("Input an operator(+,-,*,/): \n");
	scanf(" %c", &y);
	printf("Input another value: \n");
	scanf(" %d", &z);

	if (y == '*')		//Performing operations depending on the operator y
	{
		answer = (x * z);
	}
	if (y == '/')
	{	
		if (z == 0)				//If dividing by 0, end task
		{
			printf("Wait that doesn't work");
			return 1;
		}
		
		answer = (x / z);
		
	}
	if (y == '+')
	{
		answer = (x + z);
	}
	
	if (y == '-')
	{
		answer = (x - z);
	}

	printf("Your answer is: %d \n", answer);

return 0;

}
