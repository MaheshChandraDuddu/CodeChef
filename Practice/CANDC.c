#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int t, i, k, n1 = 0;
        scanf("%lld", &t);
	long long int in[t];
	for(i = 0; i < t; i++)
        {
		scanf("%lld", &in[i]);
		if(in[i] > n1)
		{
			n1 = in[i];
		}
	}
		/*for(k = 0; k < n; k++)
		{
			peep[k] = 0;
		}*/
		long long int temp[n1 + 1];
		temp[0] = 1;
		for(i = 1; i <= n1; i++)
		{
			if(i & 1)
			{
				 temp[i] = temp[i - 1];
			}
			else 
			{
				temp[i] = ((i + 1) * (temp[i - 1])) % 1000000007;
			}
			//temp[j] = temp[j] % 1000000007;
			//printf("%lld\n", peep % 1000000007);
	        }
		for(k = 0; k < t; k++)
		{
			printf("%lld\n", temp[in[k] - 1]);
		}
        exit(0);
}


