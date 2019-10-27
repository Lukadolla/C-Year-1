#include <stdio.h>
#include <stdbool.h>


int main ()
{
	int data[5][10] = 		/*Creating 2d array with driver data*/
	{

		{3, 1, 3, 4, 6, 7, 3, 2, 5, 3},
		{2, 2, 2, 3, 4, 4, 3, 3, 3, 2},
		{5, 6, 7, 6, 5, 3, 3, 3, 3, 3},
		{3, 3, 3, 3, 4, 4, 3, 2, 1, 3},
		{2, 3, 4, 6, 6, 2, 5, 1, 3, 3}
	};
	
	int driver, i, j, max;			/*Declaring varaibles where i and j are counts for later loop*/
	float average, total_average;
	bool found = 0;					/*Setting bool*/
	
	printf("Which driver's data would you like to see?\n");		/*Prompting user for input*/
	scanf("%d", &driver);
	
	printf("Driver %d summary: \n", driver);		/*Displaying summary of selected driver*/
	driver = driver - 1;							/*Setting driver count to driver - 1 as the array starts at 0*/
	printf("Acceleration Recordings: ");
	
	for(i = 0; i <= 10; i++)				/*Accessing and printing driver accaleration recordings*/
	{
		printf("%d, ", data[driver][i]);
	}
	
	
	max = data[driver][0];		/*For loop to find the maximum acceleration of driver. Each element is compared to max and if it's bigger, it becomes the new max*/	
	
	for(i = 0; i <= 10; i++)
	{
		if(data[driver][i] > max)
		{
			max = data[driver][i];	
		}	
	}
	
	printf("\nThe maximum average acceleration for driver %d is: %d \n", (driver + 1), max); /*Printing max acceleration*/
	
	for(i = 0; i < 10; i++)					/*Summing up all the elements in the data array to then get average*/
	{
		average = average + data[driver][i];
	}
	
	average = average/i;		/*Calculating and printing the average accaeleration*/
	
	printf("The average acceleration for all the trips for driver %d is: %f\n", (driver + 1), average);
	
	for(i = 0; i < 10; i++)		/*For loop to determine if a discount is applicable*/
	{
		if(data[driver][i] >= 6 || average > 5)
		{
			found = 1;							/*Using bool varaible to select between the two options for discounts*/
		}
	}
	
	if(found == 1)
	{
		printf("No discount to be applied\n");
	}
	
	if(found == 0)
	{
		printf("Discount to be applied\n");
	}
	
	for(i = 0; i < 5; i++)					/*For loop to calculate total average acceleration of all drivers by adding up all the elements in the array*/
	{
		for(j = 0; j < 10; j++)
		{
			total_average = total_average + data[i][j];
		}
	}
	
	total_average = total_average/50;		/*Dividing total by the number of elements in the array and printing the result*/
	
	printf("The total average acceleration for all drivers for all trips is: %f", total_average);
}
