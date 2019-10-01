#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N, i;
        scanf("%d", &N);
        char s[N+1];
        scanf("%s", s);
        long long int one_count = 0;
        for(i = 0; i < N; i++)
        {
            if(s[i] == '1')
            {
                one_count++;
            }
        }
        //ans = nc1 + nc2 here n = no. of 1's in given string
        one_count = ((one_count)*(one_count+1))/2;
        printf("%lld\n", one_count);
    }
    exit(0);
}

