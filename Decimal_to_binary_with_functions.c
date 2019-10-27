#include <stdio.h>
#include <math.h>
#define Max_Size 100

void Binary(int decimal, int counter, int i);		/*Declaring function*/
int number[Max_Size];							/*Creating a global array*/

int main ()
{
	int decimal, number[Max_Size], i, counter = 0;		/*Declaring variables*/
	
	printf("Input a decimal number to be converted to binary:\n");	/*Input from user*/
	scanf("%d", &decimal);
	printf("The binary number is: ");
	Binary(decimal,counter,i); 

}

void Binary(int decimal, int counter, int i)		/*Function to convert decimal to binary*/
{	
	if(decimal > 0)				/*If statement to check if the number has been fully converted*/ 
	{
		number[counter] = decimal % 2;		/*Passing the 0 or 1 value into an array to print later*/
		counter++;							/*Counter to use in for loop*/
		decimal = decimal / 2;			/*Dividing decimal by 2 so that we keep getting binary digits with each loop*/ 
		Binary(decimal,counter,i);		/*Calling function within itself*/
	}
	
	else		/*Once the decimal number is fully broken down, the resulting array will be printed backwards to produce a correct result*/
	{
		for(i = counter - 1; i >= 0; i--)
		{
			printf("%d", number[i]);
		}	
	}
}
