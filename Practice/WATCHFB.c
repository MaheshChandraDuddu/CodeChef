#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N, i, chk = 0, temp = 0, temp1 = 0;
        scanf("%d", &N);
        for(i = 1; i <= N; i++)
        {
            int num, x, y;
            scanf("%d %d %d", &num, &x, &y);
            if(x == y)
            {
                printf("YES\n");
                chk = 1;
            }
            else if(num == 1)
            {
                printf("YES\n");
                chk = 1;
            }
            else if(!chk)
            {
                printf("NO\n");
                //chk = 0;
            }
            else if(MIN(x, y) < MAX(temp, temp1))
            {
                printf("YES\n");
                chk  = 1;
            }
            else
            {
                printf("NO\n");
                chk = 0;
            }
            temp = x; 
            temp1 = y; 
            
        }
    }
    exit(0);
}

