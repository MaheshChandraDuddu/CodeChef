#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	long int t, i, a, b, c, d;
	scanf("%ld", &t);
        
	for(i = 0; i < t; i++)
	{
		scanf("%ld %ld", &a, &b);
                c = a + b - 1;
		d = abs(a - b) + 1;
		printf("%ld %ld\n", c, d);
	}
	return 0;
}
		


