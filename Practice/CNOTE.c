#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int X, Y, K, N;
        scanf("%d %d %d %d", &X, &Y, &K, &N);
        int P, C, ans = 0, i;
        for(i = 0; i < N; i++)
        {
            scanf("%d %d", &P, &C);
            if(Y + P >= X && C <= K)
            {
                ans = 1;
            }
        }
        if(ans)
        {
            printf("LuckyChef\n");
        }
        else
        {
            printf("UnluckyChef\n");
        }
    }
    exit(0);
}