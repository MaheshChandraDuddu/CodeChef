#include <stdio.h>
#include <stdlib.h>

#define M 1000000007
 
long long int f[100001];
 
long long int powe(long long int a, long long int b, long long int MOD)
{
 long long int x=1,y=a; 
 while(b > 0)
 	{
 		if(b%2 == 1)
 	{
 		x=(x*y);
 		if(x>MOD) x%=MOD;
 	}
 	y = (y*y);
 	if(y>MOD) y%=MOD; 
 	b /= 2;
 	}
 return x;
}
 

long long int InverseEuler(long long int n, long long int MOD)
{
 return powe(n,MOD-2,MOD);
}
 
long long int C(long long int n, long long int r, long long int MOD)
{
 
 return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
}


int main()
{
    long long int N, K, cnt1 = 0;
    scanf("%lld %lld", &N, &K);
    int arr[N], mark[8001] = {0};
    int i, j, size = 0, num;
    f[0] = 1;
	for(int i = 1 ; i <= 100000 ; i++)
		f[i] = (f[i-1]*i)%M;
    for(i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if(mark[num] == 0)
        {
            arr[size] = num;
            size++;
        }
        mark[num]++;
        /*if(mark[num] == 1)
        {
            cnt1++;
        }*/
    }
    if(K > size)
    {
        K = size;
    }
    for(i = 0; i < size; i++)
    {
        if(mark[arr[i]] == 1)
        {
            cnt1++;
        }
    }
    long long int sum = 0, ans = N+1, waste = 0;
    int l;
    for(j = 2; j <= K; j++)
    {
        sum = 0;
        for(i = 0; i < size; i++)
        {
            waste = cnt1 = 0;
            if(mark[arr[i]] > 1)
            {
                if(mark[arr[i]] > j)
                {
                    sum = sum + C(mark[arr[i]], j, M);
                }
                else if(mark[arr[i]] == j)
                {
                    if(j!=2)
                    {
                        sum = sum + C(j, 2, M)*C(N-2-1, j-2, M)+1;
                    }
                    else
                    {
                        sum = sum + 1;
                    }
                }
                else
                {
                    sum = sum + C(N-mark[arr[i]], j-mark[arr[i]], M);
                }
               //printf("sum = %lld\n", sum);
            }
         }
         //printf("%lld\n", C(N, j, M));
         sum = (C(N, j, M) - sum)%M;
         ans = (ans + sum)%M;
         //printf("ans = %lld\n", ans);
    }
    /*if(waste > K)
    {
        cnt1 = C(waste, K, M);
    }
    else
    {
        cnt1 = 1;
    }*/
    //printf("cnt1 = %lld\n", cnt1);
    if(K == 1)
    {
        printf("%lld\n", (N+1)%M);
    }
    /*else if(cnt1 == 0 || cnt1 == 1)
    {
      printf("%lld\n", ans%M);
    }*/
    else
    {
        printf("%lld\n", (ans)%M);
    }
    exit(0);
}
