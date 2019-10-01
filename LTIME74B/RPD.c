#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumdig(int num)
{
	int sum = 0;
	while(num != 0)
	{
		sum = sum + num%10;
		num = num/10;
	}
	return sum;
}

int main()
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		int N, i, j;
		scanf("%d", &N);
		int arr[N], ans = 0;
		for(i = 0; i < N; i++)
		{
			scanf("%d", &arr[i]);
		}
		for(i = 0; i < N; i++)
		{
			for(j = i+1; j < N; j++)
			{
				int val = sumdig(arr[i] * arr[j]);
				if(val >= ans)
				{
					ans = val;
				}
			}
		}
		printf("%d\n", ans);
	}

}
