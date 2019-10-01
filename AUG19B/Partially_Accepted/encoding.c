#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 1000000007

long long int f(long long int x)
{
    long long int rem = 0, rem1 = 0, i = 0, sum = 0, qu = 0;
    if(x <= 10)
    {
        return x;
    }
    while(x!=0)
    {
        qu = x/10;
        rem = x%10;
        rem1 = qu%10;
        x = x/10;
        /* if(i == 0)
        {
            val = rem;
        }*/
        if(rem != rem1)
        {
            sum = (sum%M + (rem%M*(long long int)pow(10, i)%M)%M)%M;
        }
        if(x == 0)
        {
            sum = (sum%M + (rem1%M*(long long int)pow(10, i+1)%M)%M)%M;
        }
        /* else if(i == 0)
        {
            continue;
        }*/
        
        i++;
    }
    return sum;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int NL, NR, R, L;
        scanf("%lld", &NL);
        //char L[NL+1];
        scanf("%lld", &L);
        scanf("%lld", &NR);
        //char R[NR+1];
        scanf("%lld", &R);
        long long int sum = 0, i;
        for(i = L; i <= R; i++)
        {
            sum = (sum%M + f(i)%M)%M;
            //printf("F(%lld) = %lld\n", i, f(i));
        }
        printf("%lld\n", sum);
    }
}