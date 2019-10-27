
//Fibinacci using while loop

#include <stdio.h>  //Importing libraries
#include<math.h>
int main ()

{	
	int count = 1;		//Declaring variables	
	int x1 = 1;
	int x2 = 0;
	int ans;
	int i;
	
	printf("How many numbers do you want? \n");		//Prompting user for input, asking how many numbers of the sequence they want printed
	scanf("%d", &i);
	printf("\n1\n");
	
	while (i > count)
	{
		ans = x1 + x2;					//Setting answer as sum of previous two numbers
		printf("%d\n", ans);			//Printing answer
		x2 = x1;						//Re-assigning variables to move one step up the sequence
		x1 = ans;
		count += 1;						//Incrementing count
	}
return 0;
}
