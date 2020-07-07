/*
 * Program to evaluate face values.
 * Released under the Chandernagore Public License.
 * (c) 2020 The Hobbyist Blackjack Team.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int val = 0,count = 0;
	char card_name[3];
	while (card_name[0] != 'X')
	{	
		//fflush(stdin);
		puts("Enter the card name : ");
		scanf("%s", card_name);
		switch(card_name[0]){
			case 'J' :
			case 'K' :
			case 'Q' :
						val = 10;
						break;
			case 'A' :
						val = 11;	
						break;
				
			case 'X' : 
						continue;
			default  :
						val = atoi(card_name);
						//printf("I am looking at card_name = %s and value after atoi %d\n", card_name,val);
						if ((val < 1) || (val > 10)){
						puts("It is invalid input! Please provide valid input");
						continue;	
						}
		}
		if ((val > 2) && (val < 7))
			count++;
		else if (val == 10)
			count--;
		printf("Current count: %i\n",count);		
	}
	return 0;
}
	