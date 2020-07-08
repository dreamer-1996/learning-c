#include<stdio.h>

void print(int (*q)[3][4],int ii,int jj,int kk)
{
	int *p;
    for (int i=0;i<ii;i++)
	{
		for(int j=0;j<jj;j++)
		{
			p = q[i][j];
			
			for(int k=0;k<kk;k++)	
			{
				printf("%d ",*(p+k));
				
			}
		printf("\n");
		}
		printf("\n");
	}
}
int main()
{
	
	int a[2][3][4]={
	
		{
			{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12}
		},
		{
			{13,14,15,16},
			{17,18,19,20},
			{21,22,23,24}
	
		}
	
					};
		
	//display(a,2,3,4);
	print(a,2,3,4);
}