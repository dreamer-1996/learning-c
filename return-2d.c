#include<stdio.h>
#define ROW 3
#define COL 4
int *fun1()
{
	static int a[ROW][COL] ={ 	
	
		{10,12,14,30},
		{16,18,20,32},
		{22,24,26,34}
	};
	return (int*)a;
	
}

int (*fun2())[COL]
{
	static int b[ROW][COL] ={ 	
	
		{30,40,50,60},
		{70,80,90,91},
		{22,24,26,34}
	};
	return (int (*)[COL])b;

}

int (*fun3())[ROW][COL]
{
	static int c[ROW][COL] ={ 	
	
		{10,18,26,34},
		{42,50,58,66},
		{74,82,90,98}
	};
	return (int (*)[ROW][COL])c;

}
int main()
{
	int *a;
	int (*b)[COL];
	int (*c)[ROW][COL];
	a=fun1();
	printf("\nI am printing the 2-D array returned by a pointer to an integer:\n");
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COL;j++)	
		{
			printf("%d ", *(a+i*COL+j));
		
		}
		printf("\n");
	}
	b=fun2();
	printf("\nI am printing the 2-D array returned by a pointer to the zeroth 1-D array :\n");
	for(int i=0;i<ROW;i++)
	{
		
		for(int j=0;j<COL;j++)	
		{
			printf("%d ",*(*(b+i)+j));	
		
		}
		printf("\n");
	}
	c=fun3();
	printf("\nI am printing the 2-D array returned by a pointer to the 2-D array :\n");
	for(int i=0;i<ROW;i++)
	{
		
		for(int j=0;j<COL;j++)	
		{
			printf("%d ",(*c)[i][j]);	
		
		}
		printf("\n");
	}
}