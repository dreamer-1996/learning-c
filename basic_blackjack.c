/*
 * Program to evaluate face values.
 * Released under the Chandernagore Public License.
 * (c) 2020 The Hobbyist Blackjack Team.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	card_name[2] = '\0';
	puts("Enter the card name: ");
	scanf("%2s", card_name);
	int val = 0;
	switch(card_name[0])
	{
		case 'J' :
		case 'K' :
		case 'Q' :
			 		val = 10;
					break;
		case 'A' :
					val = 11;
					break;
		default  : 
					val = atoi(card_name);
	}
	printf("The value of the card is %d\n",val);
	
}

