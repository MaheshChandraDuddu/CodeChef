#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long long int t;
	scanf("%lld", &t);

	while(t--)
	{
		long long int n, k, i, j = 0, x_r = 0, max = 0;
		scanf("%lld %lld", &n, &k);
                long long int arr[n];
		for(i = 0, j = 0; i < n || j < k; i++, j++)
		{
			scanf("%lld", &arr[i]);
			if(j < k)
			{
				x_r = x_r ^ arr[j];
			}
		}
                j = 0;
		max = x_r;
		//printf("%lld\n", x_r);

		for(i = k; i < n; i++)
		{
			x_r = x_r ^ arr[j];
			x_r = x_r ^ arr[i];
			if(x_r > max)
			{
				max = x_r;
			}
			j++;
		}
                //printf("x_r = %lld\n", x_r);
		printf("%lld\n", max);
	}
	exit(0);
}


