#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N, i, j, k, cnt = 0;
        scanf("%d", &N);
        int A[N], val = 0;
        //dp[0] = 0;
        for(i = 0; i < N; i++) 
        {
            scanf("%d", &A[i]);
            //val3 = val3^A[i];
            //pref = pref ^ A[i];
            /*if(i >= 1)
            {
                dp[i] = dp[i-1]^A[i];
            }*/
        }   
        //dp[0] = 0;
        //dp[1] = A[1];
        for(i = 0; i < N; i++)
        {
            for(j = i+1; j < N;)
            {
                val = val^A[j];
                if(A[i] == val)
                {
                    //printf("dp[%d] = %d", i, dp[i]);
                    //printf("Ai = %d, val = %d, Ai^val = %d\n", A[i], val, A[i]^val);
                    //printf("i = %d, j = %d\n", i+1, j+1);
                    cnt = cnt + j-i;
                }
                /*if(dp[i]^A[i-1] == val)
                {
                    cnt++;
                }*/
                j++;
                
            }
            val = 0;
            //printf("A[%d] = %d, dp[%d] = %d\n", i, A[i], i-1, dp[i-1]);
            /*dp[i]=A[i]^dp[i-1];
            printf("dp[%d] = %d\n", i, dp[i]);
            if(dp[i] == 0)
               cnt++;
            if(A[i-1]^A[i] == A[i+1])
               cnt++;*/
        }
        /*if(val3 == 0)
        {
            cnt++;
        }*/
        printf("%d\n", cnt);
    }
    exit(0);
}

