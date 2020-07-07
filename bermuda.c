#include<stdio.h>
int main()
{
	float latitude,longitude;
	char info[80];
	while(scanf("%f,%f,%79[^\n]",&latitude,&longitude,info) == 3)
	{
	if((latitude > 25.0) && (latitude < 34.0))
		if((longitude < -64.0) && (longitude > -76.0))
			printf("%f,%f,%s\n",latitude,longitude,info);
	}
return 0;
}