
//Fibonacci using for loop

#include <stdio.h> //Importing libraries
#include <math.h>
int main ()
{
	int count;		//Declaring variables
	int x1 = 1;
	int x2 = 0;
	int ans;
	int i;
	
	printf("How many numbers would you like? \n");  //Prompting user for input, asking how many numbers of the sequence they want printed
	scanf("%d", &i);
	printf("\n1\n");
	
	for(count = 1; i > count; count += 1)		
	{
		ans = x1 + x2;				//Setting answer as sum of previous two numbers
		printf("%d\n", ans);		//Printing answer
		x2 = x1;					//Re-assigning variables to move one step up the sequence
		x1 = ans;
	}
return 0;
}
