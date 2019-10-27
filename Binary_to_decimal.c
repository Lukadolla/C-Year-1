#include <stdio.h>		//Importing libraries
#include <math.h>
#define Max_Size 9

int main ()
{
	int i, num = 0, position = 7;		//Declaring variables
	char a[Max_Size];					//Array where binary num will be stored
	
	printf("Enter a binary number to be converted:\n");		//Prompting user for input
	fgets(a, Max_Size, stdin);								//Inserting the binary number into array
	
	for(i = 0; i <= Max_Size; i++)
	{
		if(a[i] == '1')					//If the number in the binary sequence is 1, num is updated with 2 to the power of the current position
		{
			num = num + pow(2,position);
		}
	position--;							//Position moves one element lower in the array
	}

printf("The number in decimal is: %d\n", num);		//Answer printed
return 0;
}
