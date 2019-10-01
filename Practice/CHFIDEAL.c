#include <stdio.h>

int main(void) {
	printf("1\n");
	fflush(stdout);
	int y;
	scanf("%d", &y);
	if(y == 2)
	{
	    printf("3\n");
	    fflush(stdout);
	}
	else if(y == 3)
	{
	    printf("2\n");
	    fflush(stdout);
	}
	printf("2\n");
	fflush(stdout);
	scanf("%d", &y);
	if(y == 1)
	{
	    printf("3\n");
	    fflush(stdout);
	}
	else if(y == 3)
	{
	    printf("1\n");
	    fflush(stdout);
	}
	printf("3\n");
	fflush(stdout);
	scanf("%d", &y);
	if(y == 1)
	{
	    printf("2\n");
	    fflush(stdout);
	}
	else if(y == 2)
	{
	    printf("2\n");
	    fflush(stdout);
	}
	return 0;
}

