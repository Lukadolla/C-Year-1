#include <stdio.h>

void enter (void);		/*Declaring 4 functions*/
void leave ();
int money (void);
void total ();

int people = 0; 		/*Setting the global variable, the amount of people to 0*/

int main ()
{
	int i; 			/*Count which will be used to track user input*/
	
	do				/*Do while loop which will dispaly options to user and prompting for input*/
	{	
		printf("Input 1 to increase amount of people in the stadium.\nInput 2 to decrease amount of people in the stadium.\nInput 0 to leave loop\n");
		scanf("%d", &i);
		fflush(stdin);			/*Clearing i each time to avoid overflow*/
	
			
		if(i == 1)			/*Based on user input, the program will go to a function to complete calculations*/
		{
			enter();
		}
	
		if(i == 2)
		{	
			leave ();
		}
	
	} while(i != 0);	/*Do while loop will terminate when the user inputs 0*/
	
	
	total ();		/*Displaying total amount of people at the end of the program*/
	printf("\a");
}	


void leave ()			
{	
	if(people <= 0)		/*Error message that displays if people = 0 and user wants to remove a person*/
	{
		printf("Wait you can't have negative people\n");
	}
	
	people -= 1;		/*Otherwise, the amount of people is decremented*/
	
	
} 

void enter (void)		/*If user wants to add a person, this function will increment the total and then the money function is called*/
{
	people += 1;
	money ();
}

int money (void)		/*Function that increases income by 20 every time a person enters the stadium and prints the new value*/
{
	int static income = 0;		/*Calling income as a static variable*/    
	income += 20;
	printf("The current income is: %d \n", income);
	return income;
}

void total ()			/*Function to display the total amount of people once the loop has ended*/
{
	printf("The total amount of people in the stadium is: %d \n", people);
}


