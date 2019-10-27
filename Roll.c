#include <stdio.h>		//Importing libraries
#include <math.h>
#include <time.h>
#include <stdlib.h>

int choice = 0, amount = 0, i = 0, total = 0;		//Declaring varaiables

void d4 ();			//Declaring functions, which will be used to roll the type of dice sepcified in their name
void d6 ();
void d8 ();
void d10 ();
void d12 ();
void d20 ();
void d100 ();

void (*arrayFunction[7])() = {d4, d6, d8, d10, d12, d20, d100};		//Creating array of functions which will be used to select appropriate function


int main ()
{
	printf("THE ADVENTURE BEGINS!\n");
	srand(time(NULL));      //Setting seed value as time
	LOOP:					//PLace where the program will return to when an error is detected
	
	do		//Do while loop where all operations are done
	{
		total = 0;			//Resetting total
	
		printf("\nInput between 0 and 6 to roll the dice (d4(0), d6(1), d8(2), d10(3), d12(4), d20(5), d100(6))\n");		//Prompting user for input
		printf("Press 7 to end input\n");
		scanf("%d", &choice);				//Choice saved for later usage
		printf("\n");
		
		if(choice > 7 || choice < 0)		//Error handling for incorrect input
		{
			printf("ERROR: Invalid choice\n");
			goto LOOP;
		}
		
		if(choice != 7)		//Otherwise, proceed
		{
			printf("How many times would you like to roll?\n");	//Prompting user how many dice they would like to roll
			scanf("%d", &amount);
		
			for(i = 0; i < amount; i++)			//That amount is used to loop inside the function array where the appropriate function is called, based on user's previous choice
			{
				(*arrayFunction[choice])();		
			}
		
			printf("Your total is: %d \n", total);		//Total for the roll is printed
		}	
	
	}while(choice != 7);
	choice = 0;						//Resetting choice value so user can input again
}

void d4 ()							//Functions which generate random rolls however many times the call loops and increasing total every time 
{	
	int roll_d4 = (rand() % 4) + 1;
	total = total + roll_d4;
	printf("You rolled: %d\n", roll_d4);
}

void d6 ()
{
	int roll_d6 = (rand() % 6) + 1;
	total = total + roll_d6;
	printf("You rolled: %d\n", roll_d6);
}

void d8 ()
{
	int roll_d8 = (rand() % 8) + 1;
	total = total + roll_d8;
	printf("You rolled: %d\n", roll_d8);
}

void d10 ()
{
	int roll_d10 = (rand() % 10) + 1;
	total = total + roll_d10;
	printf("You rolled: %d\n", roll_d10);
}

void d12 ()
{
	int roll_d12 = (rand() % 12) + 1;
	total = total + roll_d12;
	printf("You rolled: %d\n", roll_d12);
}

void d20 ()
{
	int roll_d20 = (rand() % 20) + 1;
	total = total + roll_d20;
	printf("You rolled: %d\n", roll_d20);
}

void d100 ()
{
	int roll_d100 = rand() % 100;
	total = total + roll_d100;
	printf("You rolled: %d\n", roll_d100);
}
