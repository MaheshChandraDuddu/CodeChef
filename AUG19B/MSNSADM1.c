#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N, i;
        scanf("%d", &N);
        int a[N], b[N], ans;
        for(i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
        }
        for(i = 0; i < N; i++)
        {
            scanf("%d", &b[i]);
        }
        ans = 20*a[0] - 10*b[0];
        if(ans < 0)
        {
            ans = 0;
        }
        for(i = 1; i < N; i++)
        {
            if((20*a[i] - 10*b[i]) > ans)
            {
                ans = 20*a[i] - 10*b[i];
            }
        }
        printf("%d\n", ans);
    }
    exit(0);
}