#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char string[256];	
	FILE * file = fopen( "/proc/loadavg", "r" );
	fscanf(file, "%s", &string);
	printf("LoadAvg : %s\n", string);
	fclose(file);
	return(0);
}


