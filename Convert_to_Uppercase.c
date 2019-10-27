#include <stdio.h>
#define Max_Length 200
int main (){
	char msg[Max_Length];
	int i = 0;

	printf("Enter a lowercase sentence: \n");	/*Input from user*/
	scanf("%[^\n]s", msg);

	while ((i < Max_Length) && (msg[i] != '\0')){
		if ((msg[i] > 96) && (msg[i] < 123)) 		/*Checking if the characters are within the alphabetical range and then printing the uppercase*/	
			printf("%c", msg[i] - 32);	
		else if ((msg[i] > 64) && (msg[i] < 91))
			printf("%c", msg[i]);
		i += 1;
	}
	printf("%c", '\7');
	
	return 0;
}
