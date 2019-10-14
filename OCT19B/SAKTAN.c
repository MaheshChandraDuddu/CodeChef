#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);
        int row[N+1], column[M+1];
        int i, j, X, Y;
        for(i = 0; i <= N; i++)
        {
            row[i] = 0;
        }
        for(j = 0; j <= M; j++)
        {
                //A[i][j] = 0;
                column[j] = 0;
        }
        long long int cnt = 0;
        while(Q--)
        {
            scanf("%d %d", &X, &Y);
            row[X]++;
            column[Y]++;
        }
        for(i = 1; i <= N; i++)
        {
            for(j = 1; j <= M; j++)
            {
                if((row[i] + column[j])%2 != 0 && (row[i] +column[j])!= 0)
                {
                    cnt++;
                }
                // printf("%d ", A[i][j]);
            }
            //printf("\n");
        }
        printf("%lld\n", cnt);
    }
    exit(0);
}



