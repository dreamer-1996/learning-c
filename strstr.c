#include <stdio.h>
#include <string.h>

int main()
{
	char haystack[] = "Dysfunctional";	
	char needle[] = "funi";
		if(strstr(haystack,needle))
			printf("Bingo");
		else
			printf("Oops");
	
}