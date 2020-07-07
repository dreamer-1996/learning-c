#include <stdio.h>

void go_south_east(int lat,int lon)
{
	lat = lat - 1;
	lon = lon + 1;
}
void go_sout_east(int *lat,int *lon)
{
	*lat = *lat - 1;	
	*lon = *lon + 1;
}
int main()
{
	int latitude = 32;
	int longitude = -64;
	go_south_east(latitude,longitude);
	printf("The latitude is %d and longitude is %d\n",latitude,longitude);
	go_sout_east(&latitude,&longitude);
	printf("The latitude is %d and longitude is %d",latitude,longitude);
	return 0;
}