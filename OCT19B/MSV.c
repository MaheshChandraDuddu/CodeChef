#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmpf(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N;
        scanf("%d", &N);
        int arr[N], i, j;
        int freq[1000001] = {0};
        int mark[1000001] = {0};
        for(i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }
        int ans = 0;
        for(i = 0; i <= N-1; i++)
        {
            //cur = 0;
            freq[arr[i]]--;
            for(j = 1; j <= sqrt(arr[i]); j++)
            {
                if(arr[i]%j == 0)
                {
                    if((arr[i]/ j) == j)
                    {
                        if(freq[j] > 0)
                        {
                            mark[j] += 1;
                        }
                    }
                    else
                    {
                        if(freq[j] > 0)
                        {
                            mark[j] += 1;
                        }
                        if(freq[(arr[i]/j)] > 0)
                        {
                                mark[(arr[i]/j)] += 1;
                        }
                    }
                    //printf("j = %d, ar/j = %d\n", j, arr[i]/j);
                }
            }
            /* if(freq[arr[i]] > 1)
            {
                cur += freq[arr[i]];
            }*/
            //freq[arr[i]]--;
            //printf("cur = %d\n", cur);
            /* if(cur > ans)
            {
                ans = cur;
            }*/
        }
        qsort(mark, 100001, sizeof(int), cmpf);
        ans = mark[100000];
        printf("%d\n", ans);
    }
    exit(0);
}