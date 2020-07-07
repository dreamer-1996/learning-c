#include <stdio.h>

int main()
{
	int card = 1;
	if(card > 1)
		card = card-1;
		if(card < 7)	
		puts("Small Card\n");
		//printf("Hello");  /*This line will cause compilation error.*/
	else
		puts("Ace!");       /*Looking at the indentation it might appear that else is attached with top if.
							  However else will attach itself to the closest if statement.indentation has no significance
							  in C.*/
}
