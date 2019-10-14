#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int N, K;
        scanf("%lld %lld", &N, &K);
        long long int A[N], count[N];
        long long int i, j;
        for(i = 0; i < N; i++)
        {
            scanf("%lld", &A[i]);
            count[i] = 0;
        }
        long long int num = K%N, qu = K/N;
        for(i = 0; i < N; i++)
        {
            count[i] = count[i] + qu;
        }
        for(i = 0; i < num; i++)
        {
            if(i >= 0 && i < N)
            {
                count[i]++;
            }
            else
            {
                break;
            }
            
        }
        /*for(i = 0; i < N; i++)
        {
            printf("coun[%lld] = %lld\n", i, count[i]);
        }*/
        for(i = 0, j = N-1; i <= j; i++, j--)
        {
            long long int a = A[i], b = A[j], cnt;
            cnt = count[i] + count[j];
            if(cnt%6 == 0)
            {
                A[i] = a;
                A[j] = b;
            }
            else if(cnt%6 == 1)
            {
                A[i] = a^b;
                A[j] = b;
            }
            else if(cnt % 6 == 2)
            {
                A[i] = a^b;
                A[j] = a;
            }
            else if(cnt % 6 == 3)
            {
                A[i] = b;
                A[j] = a;
            }
            else if(cnt%6 == 4)
            {
                A[i] = b;
                A[j] = a ^ b;
            }
            else if(cnt%6 == 5)
            {
                A[i] = a;
                A[j] = a^b;
            }
             if(i == j)
            {
                //A[i] = 0;
                 if(N%2 == 0)
                {
                    if(count[N/2-1] > 0)
                    {
                         A[N/2 - 1] = 0;
                    }   
                }
                else
                {
                     if(count[N/2] > 0)
                     {
                         A[N/2] = 0;
                      }
                 }
            }
        }
        /* if(N == 1)
        {
            A[0] = 0;
        }*/
       
        
        for(i = 0; i < N; i++)
        {
            printf("%lld ", A[i]);
        }
        printf("\n");
    }
    exit(0);
}