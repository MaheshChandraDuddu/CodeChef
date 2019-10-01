#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d", &T);
	while(T--)
	{
	    int X, Y;
	    scanf("%d %d", &X, &Y);
	    printf("%d\n", (X<=Y)?0:X-Y);
	}
	return 0;
}

