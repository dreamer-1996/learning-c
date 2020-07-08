/* This program is for dynamically allocating memory for a 3-d array
 * This program will test your deep concent on memory organisation of array and C pointers
 * 
 
 
 
 */


#include<stdio.h>
#include<stdlib.h>
#define SET 2
#define ROW 3
#define COL 4
int main()
{
	int ***a;
	
	/*
	a[3][4][5] means a is a 3 dimensional array with 3 2-d array and each 2-d array has 4 1-d array and size of each 1-d 	 array is 5
	*/
	
	a=(int ***)malloc(sizeof(int**)*SET);
		
	for(int i=0;i<SET;i++)
		a[i]=(int **)malloc(sizeof(int*)*ROW);
	
	for(int i=0;i<SET;i++)
	{
		for(int j=0;j<ROW;j++)	
		a[i][j]= (int*)malloc(sizeof(int)*COL);
	}
	
	
	
	printf("\nenter the array values:\n");
	for(int i=0;i<SET;i++)
		for(int j=0;j<ROW;j++)
			for(int k=0;k<COL;k++)
			scanf("%d",&a[i][j][k]);
				
	
	printf("\nLets print the array:\n");
	for(int i=0;i<SET;i++)
	{	
		for(int j=0;j<ROW;j++)
		{	
			for(int k=0;k<COL;k++)
			{	
			printf("%d",a[i][j][k]);
			}
		printf("\n");
		}
	printf("\n");
	}
}
