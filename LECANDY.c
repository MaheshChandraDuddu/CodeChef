#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N, C;
        scanf("%d %d", &N, &C);
        int num, i;
        long long int sum = 0;
        for(i = 0; i < N; i++)
        {
            scanf("%d", &num);
            sum += num;
        }
        if(sum <= C)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    exit(0);
}

