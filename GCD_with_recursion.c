#include <stdio.h>
#include <math.h>

int GCD(int x, int y);		/*Declaring function*/

int main ()
{
	int x, y;			/*Declaring variables*/
	
	printf("Enter an integer:\n");			/*Input from user*/
	scanf("%d", &x);
	printf("Enter another integer:\n");
	scanf("%d", &y);
	printf("The Greatest Common Denominator is: %d", GCD(x,y));
	printf("\a");
}

int GCD(int x, int y)				/*Function to calculate Greatest Common Denominator*/ 
{
	
	if(y == 0)			/*Cases where one of the variables is equal to 0*/
	{
		return x;
	}
	
	if(x == 0)
	{
		return y;
	}
	
	else
	{
		if(x > y)		/*If one is larger than the other, then the larger one gets put through the modulo first*/ 
		{
			x = x%y;
		}
		
		else
		{
			y = y%x;
		}
		GCD(x,y);		/*Calling the function within itself*/ 	
	}

}


