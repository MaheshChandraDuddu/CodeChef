#include <stdio.h>
#include <stdlib.h>

/*int cmpf(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}*/
int main()
{
    int t;
    scanf("%d",  &t);
    while(t--)
    {
        int N; 
        scanf("%d", &N);
        int arr[N], i, count = 0, check = 0, j;
        for(i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }
        //qsort(arr, N, sizeof(int), cmpf);
        for(i = N-1; i >= 0; i--)
        {
            int start;
            if(i - 5 < 0)
            {
                start = 0;
            }
            else
            {
                start = i - 5;
            }
            //printf("start = %d, i = %d\n", start, i);
            for(j = start; j < i; j++)
            {
                if(arr[i] >= arr[j])
                {
                    check = 1;
                    break;
                }
                else
                {
                    continue;
                }
            }
            if(check != 1)
            {
                //printf("arr = %d\n", arr[i]);
                count++;
            }
            check = 0;
        }
        printf("%d\n", count);
    }
    exit(0);
}