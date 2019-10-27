#include <stdio.h>
#include <math.h>

int main ()
{
	int h1, h2, h3, average, max, min, i, a[3];   /*Declaring variables with i being the counter for the loop*/
	
	printf("Input 3 heights:\n");	/*Input from user*/
	scanf("%d%d%d", &h1, &h2, &h3);
	
	average = (h1 + h2 + h3)/3;		/*Getting the average height*/
	printf("The average is:%d\n\a", average);
	
	a[0] = h1;		/*Assigning the 3 heights into an array a and assigning h1 to the max and min value for sorting in the future*/
	a[1] = h2;
	a[2] = h3;
	max = h1;
	min = h1;
	
for(i = 0; i < 3; i++)		/*Finding maximum height*/
{
	 if(a[i] > max)
	 {
		max = a[i];
	 }
}
	
printf("The tallest is:%d\n\a", max);		/*Printing max*/

for(i = 0; i < 3; i++)		/*Finding the minimum height*/
{
	if(a[i] < min)
	{
		min = a[i];
	}
}

printf("The smallest is:%d\n\a", min);	/*Printing min*/
return 0;
}

