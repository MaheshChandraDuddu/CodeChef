#include <stdio.h>

int main(void) {
	// your code goes here
	long long int t;
	scanf("%lld", &t);
	
	while(t--)
	{
	    long long int N, i;
	    scanf("%lld", &N);
	    long long int arr[N], sum = 0, mean = -1, val = 0;
	    
	    for(i = 0; i < N; i++)
	    {
	        scanf("%lld", &arr[i]);
	        sum += arr[i];
	    }
	    if(sum%N == 0)
	    {
	        mean = sum/N;
	    }
	    sum = 0;
	    for(i = 0; i < N && mean != -1; i++)
	    {
	        if(arr[i] == mean && val < arr[i])
	        {
	            sum = i+1;
	            val = arr[i];
	        }
	    }
	    if(sum >= 1 && sum <= N)
	    {
	        printf("%lld\n", sum);
	    }
	    else
	    {
	        printf("Impossible\n");
	    }
	}
	return 0;
}

