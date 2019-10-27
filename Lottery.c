#include <stdio.h>
#include <time.h>

int main ()
{
	int number, thunderball, i, j, a[39];		/*Declaring variables*/
	
	srand(time(NULL));
	
	printf("The numbers for the lottery are:\n");
	
	for(i = 0; i < 5; i++)					/*Generating 5 numbers between 1 and 39*/
	{
		number = rand () % 39;
		
		if(a[number] == 1)				/*If the number has already been generated, it is ignored by decrementing i to allow for new generation*/
		{
			i--;
		}
		
		else
		{
			printf("%d\n", number + 1);		/*Otherwise, the number is printed and its space in the array is set to 1*/
			a[number] = 1;
		}
	}
	
	printf("The Thunderball number is:\n");		/*Generating 1 number from 1 to 14*/
	
	for(i = 0; i < 1; i++)
	{
		thunderball = rand () % 14;
		printf("%d\n", thunderball + 1);
		printf("\a");
	}
	
}
