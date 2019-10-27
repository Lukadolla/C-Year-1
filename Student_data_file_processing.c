#include <stdio.h>
#include <stdlib.h>
#define Max_Size 100

char name[Max_Size], study_field[Max_Size];	/*Defining variables which are global*/
int phone_num, student_num, end, i;		
double GPA;	

FILE *Ptr;	/*File pointer*/

void GPA_Analysis ();	/*Function prototype*/

int main ()
{	
	if((Ptr = fopen("students.txt", "w")) == NULL)	/*Error message if file can't be open*/
	{
		printf("The file couldn't be opened");
	}
	
	else	/*Otherwise, proceed to for loop*/
	{
		for(i = 0; i < Max_Size; i++)	
		{		
			printf("Input the name of the student:\n");		/*Acquiring user input*/ 
			scanf("%s", name);
			printf("Input the student number, phone number and field of study\n");
			scanf("%d%d%s", &student_num, &phone_num, study_field);
			printf("Lastly, input the GPA:\n");
			scanf("%lf", &GPA);
			GPA_Analysis ();		/*Calling function that analyses the GPA of the students*/
			printf("\nPress 0 to stop input and any other number to continue.\n");	/*Asking user if they want to stop input*/
			scanf("%d", &end);
			
			fprintf(Ptr, "%s %d %d %s %lf\n", name, student_num, phone_num, study_field, GPA);	/*Printing the inputed variables into the file*/
			
			if(end == 0)	/*If statement that checks if the user wants to stop input*/
			{
				fclose(Ptr);	/*If so, the file is closed and loop is broken*/
				break;	
			}
			
			else	/*Otherwise, the loop continues*/
			{
				continue;	
			}	
		}
	}
}

void GPA_Analysis ()	/*Function to analyse GPA*/
{	
	fscanf(Ptr, "%lf%d", &GPA, &student_num);	/*Scanning GPA from file*/

	if(GPA >= 3.68)		/*Intervals for the GPA results which prints the student numbers and a corresponding honour based on their GPA*/
	{
		printf("Student %d got a 1st class honour\n", student_num);
	}
	
	if(GPA >= 3.08 && GPA <= 3.67)
	{
		printf("Student %d got a 2nd class honour grade 1\n", student_num);
	}

	if(GPA >= 2.48 && GPA <= 3.07)
	{
		printf("Student %d got a 2nd class honour grade 2\n", student_num);
	}

	if(GPA >= 2 && GPA <= 2.47)
	{
		printf("Student %d has Passed\n");
	}

	if(GPA <= 1.99)
	{
		printf("Student %d failed\n");
	}
}
