#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int A[4], C[4];
        scanf("%d %d %d %d %d %d", &A[1], &A[2], &A[3], &C[1], &C[2], &C[3]);
        int i, j, check = 0;
        for(i = 1; i < 3; i++)
        {
            for(j = i+1; j <= 3; j++)
            {
                if(A[i] == A[j])
                {
                    if(C[i] != C[j])
                    {
                        check = 1;
                        break;
                    }
                }
                else if(A[i] > A[j])
                {
                    if(C[i] <= C[j])
                    {
                        check = 2;
                        break;
                    }
                }
                else
                {
                    if(C[i] >= C[j])
                    {
                        check = 3;
                        break;
                    }
                }
            }
        }
        if(check != 0)
        {
            printf("NOT FAIR\n");
        }
        else
        {
            printf("FAIR\n");
        }

    }
    return 0;
}