#include <stdio.h>		//Importing Libraries
#include <math.h>
int main ()
{
double a,b,c;				//Declaring variables
double result1, result2;
printf("Input value for a: \n");		//Prompting user for input 
scanf("%lf", &a);
printf("Input value for b: \n");
scanf("%lf", &b);
printf("Input value for c: \n");
scanf("%lf", &c);

if (a == 0)								//Handling case where equation can't be solved
	{
		printf("The root can't be computed if a is zero\n");
	}


if ((pow(b, 2) - 4 * a * c) < 0)		//If the answers are imaginary, calculate the absolute value of the equation inside square root and print the imaginary solution
{
	result1 = (-b +(sqrt(fabs ((pow(b, 2) - 4 * a * c))))) / (2 * a);
	result2 = (-b -(sqrt(fabs ((pow(b, 2) - 4 * a * c))))) / (2 * a);

	printf("Answer: %lf i\n", result1);	
	printf("Answer: %lf i\n", result2);
}

else												//Otherwise, solve equation as normal and print answers
{
	result1 = (-b +(sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
	result2 = (-b -(sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);

	printf("Answer: %lf\n", result1);
	printf("Answer: %lf\n", result2);
}		
return 0;
}
