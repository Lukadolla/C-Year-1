#include <stdio.h>
#define Max_Size 200
int main ()

{
	char msg[Max_Size];
	int i, x = 0;
	
	printf("Enter a message in which the words will be counted:\n");  /*Input message from the user using the fgets function*/
	fgets(msg, Max_Size, stdin);
	
	if(msg[0] == ' ')		/*Accounting for a space being the first character*/
	{
		x--;
	}
	
	for(i = 0; msg[i] != '\0'; i++)				/*Counting the no. of spaces within message*/
	{ 
		msg[i];
		
		if(msg[i] == ' ' && msg[i+1] == ' ')	/*Accounting for multiple spaces*/
		{
			x--;
		}
		
		if(msg[i] == ' ')						
		{
			x++;
		}
		
	}
	
	printf("The number of words is: %d\n", x + 1);	/*Adding 1 to the count of spaces in order to get the amount of words*/
	printf("%c", '\7');
	
	return 0;
	
}
