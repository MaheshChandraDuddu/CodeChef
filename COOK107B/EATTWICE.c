#include <stdio.h>
#include <stdlib.h>

int cmpf(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

long long int maxv(long long int a, long long int b)
{
	if(a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	long long int t;
	scanf("%lld", &t);
	while(t--)
	{
		long long int N, M;
		scanf("%lld %lld", &N, &M);
		long long int v[N], d[N], temp = 0, i, j = 0;
                //scanf("%lld %lld", &d[0], &v[0]);
		//temp = v[0];
		/*scanf("%lld %lld", &d[1], &v[1]);
                if(d[0] != d[1])
		{
			sum = v[0] + v[1];
		}
		else
		{
			sum = max(&v[0], &v[1]);
		}
		*/
		for(i = 0; i < N; i++)
		{
			scanf("%lld %lld", &d[i], &v[i]);
			if(v[i] >= temp)
			{
				temp = v[i];
				j = i;
			}
			//sum = sum + v[i];
		}
                long long int temp1 = 0;
		for(i = 0; i < N; i++)
		{
			if(temp1 <= v[i])
			{
				if(v[i] <= temp && d[i] != d[j])
				{
					temp1 = v[i];
				}
			}
		}
		//printf("temp = %lld, temp1 = %lld\n", temp, temp1);

                printf("%lld\n", temp + temp1);
		//qsort(v, N, sizeof(long long int), cmpf);
                //qsort(d, N, sizeof(long long int), cmpf);
                /*j = 2;
		while(d[N - 1] == d[N - j])
		{
			//printf("d[n - 1] = %lld,  d[n - %lld] = %lld\n", d[N - 1], j, d[N - j]);
			j++;
		}
		//printf("%lld\n", j);
		printf("%lld\n", v[N - 1] + v[N - j]);*/
	}
	exit(0);
}

