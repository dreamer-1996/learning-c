/*
 * Step 1 = format the data
 * Step 2 = Keep on taking inputs
 * Step 3 = Print the output
 * Step 4 = Format the data
 */

//Take input form csv file to this file using '<' and output the data to json file using '>'

#include <stdio.h>
int main()
{
	float latitude,longitude;
	char info[80];
	int started = 0;
	puts("data=[");
	while(scanf("%f,%f,%79[^\n]",&latitude,&longitude,info) == 3)
	{
		if (started)	
			printf(",\n");
		else
			started = 1;
		if((latitude < -90.00) || (latitude > 90.00))
		{
		//printf("Invalid latitude: %f\n",latitude);
		fprintf(stderr,"Invalid latitude: %f\n",latitude);
		return 2;
		}
		if((longitude < -180.00) || (longitude > 180.00))
		{
		//printf("Invalid longitude: %f\n",longitude);
		fprintf(stderr,"Invalid longitude: %f\n",longitude);
		return 3;
		}	
		printf("{latitude: %f, longitude: %f, info: '%s'}",latitude,longitude,info);
	
	}
	puts("\n]");
	return 1;
}