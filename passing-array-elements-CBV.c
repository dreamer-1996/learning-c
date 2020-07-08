#include<stdio.h>
void display(int j)
{
	
	printf("%d\n",j);
	
}
int main()
{
	 int i;
	 int marks[] = {334,21,31,48,52};
	 for(i=0;i<=4;i++)
		 display(marks[i]);
	 return 0;
}