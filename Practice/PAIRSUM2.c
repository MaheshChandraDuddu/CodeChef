#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#define MAX 10001

//int dp[MAX][MAX];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int N, Q;
        scanf("%lld %lld", &N, &Q);
        long long int B[N+1], i, j, k;
        B[0] = 0;
        long long int dp[N+1];
        dp[0] = 0;
        //long long int dp[N+2][N+2];
        for(i = 1; i < N; i++)
        {
            scanf("%lld", &B[i]);
            if(i%2==1)
            {
                dp[i] = dp[i-1] + B[i];
            }
            else
            {
                dp[i] = dp[i-1] - B[i];
            }
        }
        
        for(i = 1; i <= Q; i++)
        {
            int p, q;
            scanf("%d %d", &p, &q);
            int temp;
            if(q > p)
            {
                temp = q;
                q = p;
                p = temp;
            }
            if((q-p) % 2 == 0)
            {
                printf("UNKNOWN\n");
                continue;
            }
            if(p%2)
            {
               printf("%lld\n", dp[q-1]-dp[p-1]);
            }
            else
            {
                printf("%lld\n", -dp[q-1]+dp[p-1]);
            }
        }
    }
    exit(0);
}



