#include <stdio.h>
#include <stdlib.h>
#define FOR(a, b) for(a = 0; a < b; a++)

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N;
        scanf("%d", &N);
        int arr[N], i, mid, status = 0, num[8] = {0};
        if(N%2 == 0)
        {
            mid = N/2;
        }
        else
        {
            mid = N/2 + 1;
        }
        FOR(i, N)
        {
            scanf("%d", &arr[i]);
            num[arr[i]]++;
        }
        FOR(i, mid)
        {
            N--;
            if(arr[i] != arr[N])
            {
                status = 1;
                break;
            }
        }
        for(i = 1; i < 8; i++)
        {
            if(num[i] >= 1)
            {
                if(num[i] % 2 != 0 && i != arr[mid-1])
                {
                    status = 1;
                    break;
                }
            }
            else
            {
                status = 1;
                break;
            }
        }
        if(status == 0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    exit(0);
}

