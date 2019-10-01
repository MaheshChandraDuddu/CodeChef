#include <stdio.h>
#include <stdlib.h>
#include <math.h>
static int P[1001][1001], hp[1001][3];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N, i, j;
        scanf("%d", &N);
        int all = 0, fh = 0, sh = 0;
        char s[N+1];
        for(i = 0; i < N; i++)
        {
            hp[i][0] = 0;
            hp[i][1] = 0;
            scanf("%s", s);
            for(j = 0; j < N; j++)
            {
                P[i][j] = s[j] - '0';
                //scanf("%d", &(P[i][j]));
                if(P[i][j] == 1 && j <= N/2-1)
                {
                    hp[i][0]++;
                    fh++;
                }
                if(P[i][j] == 1 && j >= N/2)
                {
                    hp[i][1]++;
                    sh++;
                }
                /* if(P[i][j])
                {
                    all++;
                }*/
            }
        }
       /* for(i = 0; i < N; i++)
        {
         //   fh = fh + hp[i][0];
           // sh = sh + hp[i][1];
          // printf("%d",);
          for(j = 0; j < N; j++)
          {
              printf("P[%d][%d] = %d\n", i, j, P[i][j]);
          }
        }*/
        all = abs(fh - sh);
        if(all == 0)
        {
            printf("0\n");
        }
        else
        {
            for(i = 0; i < N; i++)
            {
                int val = abs(fh - sh + 2*(hp[i][1] - hp[i][0]));
                if(val < all)
                {
                    all = val;
                }
            }
            printf("%d\n", all);
        }
        //free(P);
        //free(hp);
    }
    exit(0);
}