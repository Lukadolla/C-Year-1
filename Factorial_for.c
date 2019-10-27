#include <stdio.h>		//Importing libraries
#include <math.h>
int main ()

{
	int val;			//Declaring varaiables
	int ans = 1;
	int count;
	
	printf("Input value to perform factorial on:\n");		//Prompting user for input
	scanf("%d", &val);
	
	for(count = 1; count <= val; count++)
	{
		ans = ans * count;	//Performing factorial based on the count value incrementing up until val
	}
	printf("%d\n", ans);  //Printing answer
	
	return 0;
}
