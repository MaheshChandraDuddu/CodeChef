#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 1000000007
#define MAX 1000001
long long int dp[MAX], fct[MAX];
int main()
{
    int t, i;
    scanf("%d", &t);
     fct[1] = 1;
        for(i = 2; i < MAX; i++)
        {
            fct[i] =  (fct[i-1]%M*i%M)%M;
        }
        dp[1] = 1;
        for(i = 2; i < MAX; i++)
        {
            dp[i] =  (dp[i-1]%M * fct[i]%M)%M;
        }
    while(t--)
    {
        int N;
        scanf("%d", &N);
        //dp[1] = 1;
      
       
        printf("%lld\n", dp[N]%M);
    }
    exit(0);
}