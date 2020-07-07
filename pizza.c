#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void manual(){

puts("-t : For thick crust (No argument required)");
puts("-d : Enter a string specifying the time to be delivered like 'now', '1 hour later','10:00 AM' etc (Argument required)");
puts("-n : Name of the customer (Argument required)");
puts("-h : help");	
	
}

int main(int argc, char *argv[])
{
	char *delivery = "";
	char *name ="";
	
	int thick = 0;
	int count = 0;
	char ch;
	
	while((ch = getopt(argc,argv,"td:n:h")) != EOF){
	
	switch(ch){
		
		
		case 'h' : 
					manual();
					return 2;
		case 'd' :
					
					delivery = optarg;
					break;
	
		case 't' : 	
					thick = 1;
					break;
			
		case 'n' :  
					name = optarg;
					break;
			
		default :
					fprintf(stderr,"Unknown option: '%s'\n",optarg);		
					return 1;
			}
	}
	argc -= optind;
	argv += optind;
	
	puts("-----------------------------------------------------------------------------");
	if(name[0]){
		printf("Customer name: %s\n",name);
		puts("-----------------------------------------------------------------------------");
	}
	if(thick){
		puts("Thick Crust");
		puts("-----------------------------------------------------------------------------");
	}
	if(delivery[0]){
		printf("To be delivered %s.\n",delivery);
		puts("-----------------------------------------------------------------------------");
	}
	puts("Ingredients:");
	
	for(count = 0 ; count < argc ; count++)
	puts(argv[count]);	
	puts("-----------------------------------------------------------------------------");
	
}