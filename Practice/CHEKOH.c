#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	long long int t;
	scanf("%lld", &t);
	while(t--)
	{
		long long int N;
		//long long int min, max;
		scanf("%lld", &N);
		if(N % 2 == 0)
		{
			printf("Alas\n");
		}
		else
		{
			//GP SERIES.......BLAH BLAH :)
			/*while(sum != N)
			{
				pow = pow * 2;
				sum = sum + pow;
				no_series++;
			}*/
			//no_series = log2(N + 1);
			if(N == 1)
			{
				printf("0 0\n");
			}
			else
			{
				printf("%0.f %lld\n",floor(log2(N)), N/2);
			}
		}
	}
	exit(0);
}
			


