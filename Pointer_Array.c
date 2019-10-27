#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int arraySize = 10;					/*Declaring variables*/
int myArray[10] = {2,4,6,8,10,12,14,16,18,20};
int a[10];

void reverseArray(int arraySize, int a[arraySize]);			/*Function prototypes for reversing, randomising and printing the array*/
void randomiseArray(int arraySize, int a[arraySize]);
void printArray(int arraySize, int a[arraySize]);
void (*arrayFunction[2])(int arraySize, int a[arraySize]) = {reverseArray, randomiseArray, printArray};		/*A function that points to the other functions in the program*/

int main ()
{
	int choice, i;			/*Declaring variables*/
	srand(time(NULL));		/*Setting random seed to time*/
	
	printf("Press 0 to print the array in reverse order.\nPress 1 to print the array in a random order\n"); /*Input from user to determine the function to be executed*/
	scanf("%d", &choice);
	
	(*arrayFunction[choice])(arraySize, a);		/*Calling pointer array function to call the function the user wants*/
}

void reverseArray(int arraySize, int a[arraySize])		/*Function to reverse array*/
{
	int i;
	
	for(i = 0; i <= arraySize; i++)
	{
		a[i] = myArray[arraySize - i - 1];		/*Reversing array*/
	}	
	
	printArray (arraySize, a);		/*Calling print function to print answer*/
}

void randomiseArray(int arraySize, int a[arraySize])	/*Function to randomise array*/
{
	int i, r;
	
	for(i = 0; i < arraySize; i++)
	{
		r = rand() % 10;		/*Generating random number from 0 to 9 which will correspond to the locations within the array*/
		
		if(myArray[r] == 1)		/*Checking if random number has already been used to change the location of the elements within the array*/
		{
			i--;				/*If so, a different number is assigned*/
		}
		
		else		/*Otherwise, the random number becomes the new position of a number*/
		{
			a[i] = myArray[r];
			myArray[r] = 1;			/*Stating that the number has already been used*/
		}
	}
	
	printArray (arraySize, a);	/*Calling print function to display answer*/
}

void printArray (int arraySize, int a[arraySize])	/*Function to print the altered array*/
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	
	printf("\a");
}
