#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    long long int n, num, sum = 0, pair = 0, i, pair1 = 0;
	    scanf("%lld", &n);
	    for(i = 0; i < 2*n; i++)
	    {
	        scanf("%lld", &num);
	        sum += num;
	        if(num % 2 == 1 && i < n)
	        {
	            pair++;
	        }
	        if(num % 2 == 1 && i >= n)
	        {
	            pair1++;
	        }
	    }
	    pair = abs(pair - pair1);
	    sum = (sum - pair);
	    sum = sum/2;
	    printf("%lld\n", sum);
	}
	return 0;
}

