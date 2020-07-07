#include <stdio.h>
#include "launch.h"
#include "thruster.h"

int main()
{
	fuel_meter();
	air_pressure();
	launch_pad_ready();
	puts("3....2....1..Our rocket just took off");
}
void launch_pad_ready()
{
	puts("Launch pad is ready");	
}