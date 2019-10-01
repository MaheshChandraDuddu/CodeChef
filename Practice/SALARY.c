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
       int i, num, sum, min;
       scanf("%d", &num);
       min = sum = num;
       for(i = 0; i < N-1; i++)
       {
           scanf("%d", &num);
           if(min > num)
           {
               min = num;
           }
           sum += num;
       }
       printf("%d\n", sum - N*min);
    }
    exit(0);
}

