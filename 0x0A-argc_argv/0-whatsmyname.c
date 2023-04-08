#include <stdio.h>
#include "main.h"
int main(int argc, char **argv)
{
	int i = 0;

	while(argc)
	{
		printf("%s\n", argv[i++]);
		argc--;
	}	
	return (0);
}
