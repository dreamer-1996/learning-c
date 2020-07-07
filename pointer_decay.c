#include <stdio.h>


void fortune_cookie(char *quote)
{
printf("The message size inside the function is %ld\n",sizeof(quote));
}	

int main()
{
	char quote[] = "Cookies make you fat";
	printf("The original message size is %ld\n",sizeof(quote));
	fortune_cookie(quote);
	return 0;
}