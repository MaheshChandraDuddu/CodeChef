#include <stdio.h>
#include <stdlib.h>
#define M 1000000007
int dp[100001];

int main()
{
    int t;
    scanf("%d", &t);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 2;
    //PRE-COMPUTATION
    for(int i = 4; i < 100001; i++)
    {
        dp[i] = (dp[i-2]%M + dp[i-4]%M)%M;
        dp[i] = dp[i]%M;
        //printf("dp[%lld] = %lld\n", i, dp[i]);
    }
    while(t--)
    {
        int N;
        scanf("%d", &N);
        printf("%d\n", dp[N]%M);
    } 
    exit(0);
}

