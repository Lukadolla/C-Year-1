#include <stdio.h>
#include <math.h>

void Area(int a, int b, int c, int i);		/*Declaring function*/

int main ()
{
	int a, b, c, i;
	
	for(i = 1; i < 5; i++)
	{
		printf("Give a value for a: ");		/*Input from user, looped 4 times in order to get volumes of 4 ellipsoids*/
		scanf("%d", &a);
		printf("Give a value for b: ");
		scanf("%d", &b);
		printf("Give a value for c: ");
		scanf("%d", &c);
		Area(a,b,c,i);
	}
}

void Area(int a, int b, int c, int i)			/*Function to calculate volume of ellipsoid given values a, b and c*/
{
	
	double answer;
	
	answer = (4 * M_PI * a * b * c)/3;				/*Formula*/
	printf("The area of ellipsoid %d is: %lf \n", i, answer);		/*Printing answer*/
	printf("\a");
}
