#include<stdio.h>
#define SET 2
#define ROW 3
#define COL 4
int *fun1()
{
	static int a[SET][ROW][COL] ={ 	
	
		{	
			{1,2,4,5},
			{3,4,6,7},
			{5,6,8,9}
		},
		{
			{7,8,10,11},
			{9,10,12,25},
			{11,12,78,19}
		}	
	
	};
	return (int*)a;
	
}

int (*fun2())[ROW][COL]
{
		static int b[SET][ROW][COL] ={ 	
	
		{	
			{1,2,4,5},
			{3,4,6,7},
			{5,6,10,20}
		},
		{
			{7,8,10,11},
			{9,10,12,25},
			{11,12,88,29}
		}	
	
	};
	return (int (*)[ROW][COL])b;

}

int (*fun3())[SET][ROW][COL]
{
		static int c[SET][ROW][COL] ={ 	
	
		{	
			{1,2,4,5},
			{3,4,43,7},
			{5,6,10,20}
		},
		{
			{7,8,10,11},
			{9,10,14,25},
			{11,12,88,29}
		}	
	
	};
	return (int (*)[SET][ROW][COL])c;

}
int (*fun4())[COL]
{
		static int c[SET][ROW][COL] ={ 	
	
		{	
			{1,2,4,5},
			{3,4,43,7},
			{5,6,10,20}
		},
		{
			{7,8,10,11},
			{9,10,14,25},
			{11,12,88,29}
		}	
	
	};
	return (int (*)[COL])c;

}
int main()
{
	int *a;
	int (*b)[ROW][COL];
	int (*c)[SET][ROW][COL];
	int (*d)[COL];
	a=fun1();
	printf("\nI am printing the 3-D array returned by a pointer to an integer:\n");
	for(int i=0;i<SET;i++)
	{	
		for(int j=0;j<ROW;j++)
		{
			for(int k=0;k<COL;k++)	
			{
				printf("%d ",*(a+i*ROW*COL+j*COL+k));	
			}
		printf("\n");
		}
	printf("\n");
	}
	b=fun2();
	printf("\nI am printing the 3-D array returned by a pointer to the zeroth 2-D array :\n");
	for(int i=0;i<SET;i++)
	{	
		for(int j=0;j<ROW;j++)
		{
			for(int k=0;k<COL;k++)	
			{
				printf("%d ",*(*(*(b+i)+j)+k));	
			}
		printf("\n");
		}
	printf("\n");
	}
	c=fun3();
	printf("\nI am printing the 3-D array returned by a pointer to the 3-D array :\n");
	for(int i=0;i<SET;i++)
	{	
		for(int j=0;j<ROW;j++)
		{
			for(int k=0;k<COL;k++)	
			{
				printf("%d ",(*c)[i][j][k]);	
			}
		printf("\n");
		}
	printf("\n");
	}
	d=fun4();
	printf("\nI am printing the 3-D array returned by a pointer to the zeroth 1-D array :\n");
	for(int i=0;i<SET;i++)
	{	
	
		for(int j=0;j<ROW;j++)
		{
			for(int k=0;k<COL;k++)	
			{
				printf("%d ", *(*((d+i*ROW)+j)+k));				
			}
		printf("\n");
		}
	printf("\n");
	}
}