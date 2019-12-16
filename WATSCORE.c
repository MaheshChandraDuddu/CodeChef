#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int S[11] = {0}, total_score = 0, p, s, N, i;
        scanf("%d", &N);
        while(N > 0)
        {
            scanf("%d %d", &p, &s);
            if(p <= 8)
            {
                if(S[p-1] < s)
                {
                    S[p-1] = s;
                }
            }
            N--;
        }
        for(i = 0; i < 8; i++)
        {
            total_score += S[i];
        }
        printf("%d\n", total_score);
    }
}