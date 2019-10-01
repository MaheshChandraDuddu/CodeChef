#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmpf(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N, M, K, L, R;
        scanf("%d %d %d %d %d", &N, &M, &K, &L, &R);
        int i, C[N], P[N], j, ans;
        for(i = 0; i < N; i++)
        {
            scanf("%d %d", &C[i], &P[i]);
        }
        ans = 0;
        int chck = 0;
        for(i = 0; i < N; i++)
        {
            //int temp = P[i];
            for(j = 0; j < M;)
            {
                if(C[i] >= K-1 && C[i] <= K+1)
                {
                    j++;
                    C[i] = K;
                    //break;
                }
                else if(C[i] < K-1)
                {
                    j++;
                    C[i] = C[i]+1;
                }
                else if(C[i] > K+1)
                {
                    j++;
                    C[i] = C[i] - 1;
                }
                if(i == 1)
                {
                    //printf("j = %d, C[%d] = %d\n", j, i, C[i]);
                }
            }
            //printf("C[%d] = %d, temp = %d, ans = %d\n", i, C[i], temp, ans);
            if(C[i] <= R && C[i] >= L)
            {
                if(chck == 0)
                {
                    ans = P[i];
                }
                if(P[i] < ans)
                {
                    ans = P[i];
                }
                chck = 1;
            }
        }
        if(chck)
        {
            printf("%d\n",  ans);
        }
        else
        {
            printf("-1\n");
        }
        
    }
    exit(0);
}