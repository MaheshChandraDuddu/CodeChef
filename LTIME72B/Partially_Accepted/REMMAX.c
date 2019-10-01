#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reverse(int n)
{
	int rev = 0;

	while(n != 0)
	{
		rev = rev * 10;
		rev = rev + n % 10;
		n   = n / 10;
	}
	return rev;
}

int maxv(int a, int b)
{
	if( a >= b)
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
	int t;
	scanf("%d", &t);
	if(t < 1 || t > 100)
	{
		exit(1);
	}
	int i, j, n, max = 1, max1;

	for(i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		/*if(n < 1 || n > pow(10, 10000))
		{
			exit(2);
		}*/
		for(j = 2; j <= n; j++)
		{
			max1 = reverse(j);
			max = maxv(max, max1);
		}
		printf("%d\n", reverse(max));
		max = 1;
	}
	exit(0);
}

	
