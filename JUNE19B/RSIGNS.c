#include <stdio.h>
#define M 1000000007
long long int power(long long int x, long long int y)
{
	if(y == 0)
	{
		return 1;
	}
	long long int d = power(x, y / 2);
	if(y % 2 == 0)
	{
		return ((d % M) * (d % M))%M;
	}
	else
	{
		return ((x%M)*(d%M)*(d%M))%M;
	}
}

int main(void) {
	// your code goes here
	long long int t;
	scanf("%lld", &t);
	long long int i;
	for(i = 0; i < t; i++)
	{
	    long long int r, k;
	    scanf("%lld", &k);
            r = power(2, k);
	    /*for(j = 1; j<= k; j++)
	    {
	        x = ((x % M)*(2 % M))%M;
	    }*/
	    printf("%lld\n", ((5 %M)* (r%M))%M);
	}
	return 0;
}


