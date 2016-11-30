#include <stdio.h>
#include <stdstring.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
	if (args < 2)
	{
		printf("args too few");
		return -1;
	}
	
	if (argv[1] == 'h')
	{
        printf("hello world\n");
	}
	else 
	{
		printf("please enter h to print string");
	}
	
    return 0;	
}

