#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int power(long long int base, long long int exp)
{
	if(exp == 0)
	{
		return 1;
	}
	else if(exp % 2 == 0)
	{
		return(power(base, exp/2) * power(base, exp/2));
	}
	else
	{
	        return base * power(base, exp/2) * power(base, exp/2);
        }
}
	


int main()
{
	long long int t;
	scanf("%lld", &t);
	while(t--)
	{
		long long int s1, s2, t1, t2, x;
		scanf("%lld %lld %lld %lld", &s1, &s2, &t1, &t2);
		scanf("%lld", &x);

		if(x <= t1)
		{
			x = t1 - x;
			printf("%lld\n", s1/power(2, x));
		}
		/*else if(x >= t2)
		{
			x = x - t2;
			//printf("s2 = %lld, x = %lld\n", s2, pow(2,x));
			printf("%lld\n", s2 * power(2, x));
		}*/
		else
		{
			x = x - t1;
			printf("%lld\n", s1 * power(2, x));
		}


	}
	exit(0);
}



