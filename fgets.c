#include <stdio.h>

int main()
{
	char food[20];
	puts("Here we will learn the use of fgets() to take input.Please take input :");
	fgets(food,sizeof(food),stdin);
	puts(food);
	
}