#include <stdio.h>

int main(void) {
	// your code goes here
	int N, i, j, max = 0;
	scanf("%d", &N);
	int a[N+1];
	j = -1;
	for(i = 1; i <= N; i++)
	{
	    scanf("%d", &a[i]);
        if(a[i] > max)
        {
            j = max;
            max = a[i];
        }
	}
	printf("%d\n", j);
	return 0;
}

