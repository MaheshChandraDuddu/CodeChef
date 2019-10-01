#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int A, B;
        scanf("%d %d", &A, &B);
        long long int res = A+B, cnt = 0;
        //int z = 6, o = 2, tw = 5, th = 5, fr = 4, fi = 5, si = 6, sev = 3, ei = 7, ni = 6;
        if(res == 0)
        {
            cnt += 6;
        }
        while(res > 0)
        {
            int q = res/10;
            int r = res%10;
            if(r == 0 || r == 9 || r == 6)
            {
                cnt += 6;
            }
            else if(r == 1)
            {
                cnt += 2;
            }
            else if(r == 2 || r == 3 || r == 5)
            {
                cnt += 5;
            }
            else if(r == 4)
            {
                cnt += 4;
            }
            else if(r == 7)
            {
                cnt += 3;
            }
            else if(r == 8)
            {
                cnt += 7;
            }
            res = q;
        }
        printf("%lld\n", cnt);
    }
    exit(0);
}

