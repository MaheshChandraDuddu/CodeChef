#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	// your code goes here
	long long int t;
	scanf("%lld", &t);
	while(t-- > 0)
	{
	    long long int X = 0 , Y = 0, XF, P = 1, times = 0, sq = 1;
	    scanf("%lld", &XF);
	    while(X <= XF)
	    {
	        P = sqrt(Y) + 1;
	        sq = P * P;
	        if(sq <= Y)
	        {
	            P = P + 1;
	        }
	        sq = P *P;
	        X = P;
	        Y = Y + sq;
	        times++;
	    }
	    printf("%lld\n", times-1);
	}
	return 0;
}

