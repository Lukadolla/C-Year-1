
//Program to calculate and display day of the week given a date, past or future
#include <stdio.h>
#include <time.h>

void Day(int date, int month, int year);		/*Declaring function*/

int main ()
{
	int date, month, year;
	
	printf("Input the date (eg: 5th):");			/*Input from user*/
	scanf("%d", &date);
	printf("Input the month (eg: 6 = June):");
	scanf("%d", &month);
	printf("Input the year:");
	scanf("%d", &year);
	Day(date,month,year);		
}

void Day(int date, int month, int year)			/*Function to calculate the day of the week according to the algorithm*/
{
	char days[7][100] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};		/*Array which will be used to display answer*/
	int day;
	
	if(month == 1)  /*Exceptions specified in the algorithm for January and February*/
	{
		month = 13;
		year = year - 1;
	}
	
	if(month == 2)
	{
		month = 14;
		year = year - 1; 
	}
	
	day = ((date + (13*(month + 1)/5) + (year%100) + ((year%100)/4) + ((year/100)/4) + 5*(year/100)) % 7);	/*Formula itself to calculate the day of the week given a date*/
	printf("The day of the week is: %s", days[day]);			/*Displaying answer*/
	printf("\a");
	
}
