#include <stdio.h>
#include <stdlib.h>
#define Max_Size 100

int main ()
{
	int a[Max_Size], size, i, *Ptr = a; 	/*Declaring variables such as a pointer to the array a*/
	
	printf("Enter the size of the array:\n");		/*User input for size of array*/
	scanf("%d", &size);
	
	printf("Enter the values of the array:\n");
	
	for(i = 0; i < size; i++)		/*For loop to input the individual elements of the array*/
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < size; i++)	/*For loop that converts all values within array to 10 times their value using the pointer*/
	{
		*Ptr = *Ptr * 10;
		printf("%d, ", *Ptr);
		*Ptr++;					/*Pointer incremented so that all elements in array can be multiplied*/
	}
	printf("\a");
}
