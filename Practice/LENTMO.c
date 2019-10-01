

#include <stdio.h>
int main(void) {
	// your code goes here
	long long int t, i;
	scanf("%lld", &t);
	for(i = 0; i < t; i++)
	{
	    long long int sum = 0, n, j;
	    scanf("%lld", &n);
	    long long int arr[n];
	    for(j = 0; j < n; j++)
	    {
	        scanf("%lld", &arr[j]);
	        sum += arr[j];
	    }
	    long long int k, x_r, xval = 0, psum = 0, nsum = 0, pc = 0, n_0 = 0, max_p = 0, max_n = 0;
	    scanf("%lld", &k);
	    scanf("%lld", &x_r);
	    for(j = 0; j < n; j++)
	    {
	        xval = (arr[j]^x_r) - arr[j];
	        if(xval > 0)
	        {
	            psum += xval;
	            if(max_p > xval || max_p == 0)
	            {
	                max_p = xval;
	            }
	            pc++;
	        }
	        else if(xval < 0)
	        {
	            nsum += xval;
	            if(max_n < xval || max_n == 0)
	            {
	                max_n = xval;
	            }
	        }
	        else
	        {
	            n_0++;
	        }
	    }
	        if(n == k)
	        {
	            printf("%lld\n",sum + ((psum+nsum>0) ? psum+nsum : 0));
	            /*if((psum + nsum) > 0)
	            {
	                printf("%d\n", sum + psum + nsum);
	            }
	            else
	            {
	                printf("%d\n", sum);
	            }*/
	        }
	        else
	        {
	            if(n_0 > 0)
	            {
	                printf("%lld\n", sum + psum);
	            }
	            else
	            {
	                if(k % 2 == 0 && pc % 2 == 1)
	                {
	                    if(max_n == 0)
	                    printf("%lld\n", sum + psum - max_p);
                        else
                        printf("%lld\n",sum+psum+((max_p+max_n>0)?max_n:-max_p));
	                }
	                else
	                {
	                    printf("%lld\n", psum + sum);
	                }
	            }
	        }
	}
	return 0;
}

