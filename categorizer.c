#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	char line[80];
	if (argc != 6)
	{
		fprintf(stderr,"You need to give 5 arguments\n");	
		return 1;
	}
	FILE *input = fopen("gpdata.csv","r");
	FILE *file1 = fopen(argv[1],"w");
	FILE *file2 = fopen(argv[3],"w");
	FILE *file3 = fopen(argv[5],"w");
		
	if(!input){
		fprintf(stderr,"Can't open the file.\n");
		return 2;
	}
	if(!file1){
		fprintf(stderr,"Can't open the file.\n");
		return 2;
	}
	if(!file2){
		fprintf(stderr,"Can't open the file.\n");
		return 2;
	}
	if(!file3){
		fprintf(stderr,"Can't open the file.\n");
		return 2;
	}
	
	while((fscanf(input,"%79[^\n]\n",line)) == 1)
	{	
		if (strcasestr(line,argv[2]))
			fprintf(file1,"%s\n",line);
		else if (strcasestr(line,argv[4]))
			fprintf(file2,"%s\n",line);
		else
			fprintf(file3,"%s\n",line);
	
	}
	fclose(file1);
	fclose(file2);
	fclose(file3);
	fclose(input);
	return 0;
}