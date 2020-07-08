#include<stdio.h>
int main()
{
	int stud[5][2] = {	
							{10,12},
							{20,22},
							{30,32},
							{40,42},
							{50,52}
					  };
	for(int i=0;i<5;i++)
	{
		printf("\n");
		for(int j=0;j<2;j++)
			printf("%d ",*(*(stud+i)+j));
		
	}

}