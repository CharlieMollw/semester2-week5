/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Charlie Molle
 * ID: 201975475
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long number=0;
	char input[9];
	
	printf("Enter a hexadecimal:");
	
	scanf("%s", input);

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");

	for(int i=0; i<strlen(input); ++i)
	{
		number = number*16;
		switch(input[i])
		{
			case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
				number = number + (long)(input[i]-'0');
				break;
			case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
				number = number + (long)((int)input[i]-55);
				break;
			case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
				number = number + (long)((int)input[i]-87);
				break;
				

			default:
				printf("Error: Invalid Hexadecimal\n");
				return 0;
		}

	}
	
	// print the decimal result
	printf("decimal:%ld\n", number);
	
	return 0;
}