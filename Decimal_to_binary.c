#include <stdio.h>		//Importing libraries and declaring size of array
#define Max_Size 8

int main ()
{
	int Num, a[Max_Size], j, i = 0;		//Declaring variables
	
	printf("Input a value to be converted:\n");  //Prompting user for input
	scanf("%d", &Num);
	
	while(i < Max_Size)
	{
		a[i] = Num%2;		//Saving result of modulo division into array
		Num = Num/2;		//Decreasing value of Num to perform further operations
		i++; 				//Incrementing i
	}
	
	for(j = i; j >= 0; j--)		
	{	
		a[j] = a[i];			//Printing the answer backwards, to ensure the bits are in correct order
		printf("%d", a[j]);
		i--;	
	}	
	return 0;
	
}
	
