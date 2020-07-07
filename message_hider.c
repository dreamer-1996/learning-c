#include <stdio.h>
#include <string.h>
#include "encrypt.h"
int main()
{
	char msg[80];
	int string_length;
    printf("Enter text: ");
	while(fgets(msg,80,stdin))	
	{
		printf("\nThe original text is: %s",msg);
		string_length = strlen(msg)-1;
		encrypt(msg);
		msg[string_length] = '\0';
		printf("\nThe encrypted text is: %s",msg);
		printf("\nEnter text: ");
	}
	
}