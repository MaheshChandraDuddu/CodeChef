#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int x, y, k;
	    scanf("%d %d %d", &x, &y, &k);
	    if(((x+y)/k)%2 == 0)
	    {
	        printf("Chef\n");
	    }
	    else
	    {
	        printf("Paja\n");
	    }
	}

	return 0;
}

