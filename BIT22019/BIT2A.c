#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N;
        scanf("%d", &N);
        int A[N], B[N], i, j;
        for(i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
            B[i] = 0;
        }
        for(i = 0; i < N; i++)
        {
            for(j = 0; j < N; j++)
            {
                if(i != j)
                {
                    if(A[j] > A[i])
                    {
                        B[i]++;
                    }
                }
            }
        }
        for(i = 0; i < N; i++)
        {
            printf("%d ", B[i]);
        }
        printf("\n");
    }
    exit(0);
}

