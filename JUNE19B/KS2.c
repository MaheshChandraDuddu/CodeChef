#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	long long int t;
	scanf("%lld", &t);

	long long int i; 
	for(i = 0; i < t; i++)
	{
		long long int n, k, m, sum = 0, val = 0, qu = 10;
		scanf("%lld", &n);
		k = n;
		while(n > 0)
		{
			m = n % 10;
			sum = sum + m;
			n = n /10;
		}
		if(sum % 10 != 0)
		{
			while(sum / qu >= 1)
		        {
				qu = qu + 10;
		        }
			val = abs(qu - sum);
		}
		printf("%lld%lld\n", k, val);
	}
	exit(0);
}
