#include<stdio.h>
void show(int (*q)[3],int row,int col){

	int (*p)[3],i,j;
	
for (i=0;i<row;i++)	
{
	p = q+i;
	
	for(j=0;j<col;j++)	
	{
		printf("%d ", *(*p+j));
		
	}
	printf("\n");
}

}
void print(int *q,int row,int col)
{	
	printf("\n\n");
	int i,j;
	for(j=0;j<col;j++)
	{
		for (i=0;i<row;i++)
		{
		printf("%d ",*(q+i*row+j));	
		}
		printf("\n");
	}
	
}

int main()
{
	int stud[3][3] = {	
							{1,2,3},
							{4,5,6},
							{7,8,9}
							
					  };

	
	
	show(stud,3,3);
	print(stud,3,3);
}





