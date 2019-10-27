#include <stdio.h>		//Importing libraries
#include<math.h>
int main ()
{	
	int count = 1;		//Declaring variables
	int x1 = 1;
	int x2 = 0;
	int ans;
	int i;
	
	printf("How many numbers do you want? \n");		//Prompting user for input to see how many numbers in the sequence they want
	scanf("%d", &i);
	
	printf("\n%d\n", x1);
	
	while (i > count)		//While count is less than i, take the first value, multiply it by 2 and set it as answer
	{
	
		ans = (2*x1) + x2;
		printf("%d\n", ans);		//Print answer
		x2 = x1;
		x1 = ans;					//Re-assign variables to move one step up the sequence 
		count += 1;
	}
return 0;
}
