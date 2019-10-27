#include <stdio.h>
#define Max_Size 20

int main ()
{
	int row1, row2, column1, column2, i, j, k, answer = 0, multiple;	/*Declaring variables*/
	
	printf("Input the dimentions of matrix 1 (rows then comlumns):\n");	/*Prompting user for input, one matrix at a time*/
	scanf("%d%d", &row1, &column1);
	printf("Input the dimentions of matrix 2 (rows then columns):\n");
	scanf("%d%d", &row2, &column2);
	
	row1 = row1 - 1;		/*Taking 1 away from all variables since the array starts at 0*/
	row2 = row2 - 1;
	column1 = column1 - 1;
	column2 = column2 - 1;
	
	int matrix1[Max_Size][Max_Size], matrix2[Max_Size][Max_Size], answer_matrix[Max_Size][Max_Size];		/*Declaring arrays which will be the matrices*/
	
	if(column1 != row2)			/*Guard that insures that matrices can be multiplied*/
	{
		printf("The matrices cannot be multiplied\n");
		return 1;
	}
	
	printf("Fill the first matrix, row by row:\n");		/*Filling the first matrix*/
	
	for(i = 0; i <= row1; i++)
	{
		for(j = 0; j <= column1; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	printf("Fill the second matrix, row by row:\n");	/*Filling second matrix*/
	
	for(i = 0; i <= row2; i++)
	{
		for(j = 0; j <= column2; j++)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	printf("The first matrix: \n");	/*Displaying the matrix for the user*/

	for(i = 0; i <= row1; i++)
	{
		for(j = 0; j <= column1; j++)
		{
			printf("%d|", matrix1[i][j]);
		}
	printf("\n");
	}
	
	printf("The second matrix:\n");	/*Displaying matrix*/
	
	for(i = 0; i <= row2; i++)
	{
		for(j = 0; j <= column2; j++)
		{
			printf("%d|", matrix2[i][j]);
		}
	printf("\n");
	}
	
	
	for(i = 0; i <= row1; i++)		/*Multiplying the two matrices together, row by column and summing the results together*/
	{
		for(j = 0; j <= column2; j++)
		{
			for(k = 0; k <= row2; k++)
			{
				multiple = matrix1[i][k] * matrix2[k][j];	/*Result of multiplication of 2 elements*/
				answer = answer + multiple;					/*Summing the result to the answer*/
			}
		
			answer_matrix[i][j] = answer;	/*Saving answer into new answer array*/
			answer = 0;						/*Resetting the answer so that loop can start over and new calculation can begin*/
		}
	}
	
	printf("The resulting matrix is:\n");	/*Printing resulting matrix*/
	
	for(i = 0; i <= row1; i++)
	{
		for(j = 0; j <= column2; j++)
		{
			printf("%d|", answer_matrix[i][j]);
		}
	printf("\n");
	}
}
