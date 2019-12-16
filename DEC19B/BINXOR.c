#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M 1000000007
#define MAX 100000
#define MIN(a,b) (((a)>(b))?(b):(a))

long long int fact[MAX + 1];

int fast_power(long long base, long long n, long long mod)
{
    if(n == 0)
    {
        return 1;
    }

    if(n == 1)
    {
        return base;
    }

    long long half_n = fast_power(base, n/2, mod);

    if(n % 2 == 0)
    {
        return (half_n * half_n) % mod;
    }
    else
    {
        return ( ( ( half_n * half_n) % mod) * base) % mod;
    }
}

int findMultiplicativeInverse(int n, int mod)
{
    return fast_power(n, mod - 2, mod);
}

int main()
{
    int i, T;
    
    fact[0] = 1;
    for(i = 1; i <= MAX; i++)
    {
        fact[i] = (fact[i - 1] * i)%M;
    }
   
    scanf("%d", &T);
    while(T--)
    {
        int N, j, total_ones = 0, total_zeros = 0, one_first = 0, one_second = 0, zero_first = 0, zero_second = 0, ones_on_both_sides = 1;
        long long int ans = 0, num, den, mmi_den, ans1;
        scanf("%d", &N);
        char s[N+1], s1[N+1];
        scanf("%s", s);
        scanf("%s", s1);

        for(j = 0; j < N; j++)
        {
            if(s[j] == '1')
            {
                total_ones++;
                one_first++;
            }

            if(s1[j] == '1')
            {
                total_ones++;
                one_second++;
            }

            if(s[j] == '0')
            {
                total_zeros++;
                zero_first++;
            }

            if(s1[j] == '0')
            {
                total_zeros++;
                zero_second++;
            }
        }
       ;
        int max_ones_possible = 0, min_ones_possible;
        num = fact[N];
        max_ones_possible += MIN(one_first, zero_second) + MIN(one_second, zero_first);
        min_ones_possible = abs(one_first - one_second);
        for(j = max_ones_possible; j >= min_ones_possible; j-=2)
        {
            den = (fact[j] * fact[N - j]) % M;
            mmi_den = findMultiplicativeInverse(den, M)%M;
            ans1 = (num * mmi_den)%M;
            ans = (ans + ans1)%M;   
        }
        printf("%lld\n", ans);
    }
    exit(0);
}