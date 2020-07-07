/*
 * This is a code for searching a specific music name
 * from a list of names
 * The user will only supply substring
 * Author : Indian Nietzsche
 * Parts of code can be replicated under Creative Commons License (c)
 */

#include <stdio.h>
#include <string.h>


void find_track(char search_for[],char (*tracks)[80],int no_of_songs,int length_of_song_name)
{
	int i,flag = 0;
	
	for(i=0;i<no_of_songs;i++)
	{
		if(strcasestr(tracks[i],search_for))
		{
		
		flag = 1;
		
		printf("RECORD NO: %d \t RECORD: %s\n",i+1,tracks[i]);
		
		
		}
	}
	if (flag == 0)
	
	printf("\nSorry there is no such record\n");
}

int main()
{
	int val;
	
	char search_for[80];
	
	char tracks[][80] = {
	"I left my heart in Harvard Med school",
	"Newark, Newark - a wonderful town",
	"Dancing with a dork",
	"From here to maternity",
	"The girl from Iwo Jima",
	"Desireless - Voyage Voyage",
	"World belongs to you",
	"Starboy",
	"You make me sick",
	"Under Again",
	"Bank Account",
	"Losing my mind",
	};
	
	val = sizeof(tracks)/sizeof(search_for);
	
	printf("Search for: ");
	
	scanf("%79[^\n]",search_for);	
	
	find_track(search_for,tracks,val,sizeof(search_for));
	
	return 0;	
}	