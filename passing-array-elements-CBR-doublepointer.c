#include<stdio.h>
void show(int **n)
{
printf("%d\n",**n);

}
void display(int *j)
{
	
	show(&j);
	
}
int main()
{
	 int i;
	 int marks[] = {334,21,31,48,52};
	 for(i=0;i<=4;i++)
		 display(&marks[i]);
	 return 0;
}