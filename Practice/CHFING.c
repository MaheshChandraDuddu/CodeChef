#include <stdio.h>
#include <stdlib.h>
#define M 1000000007
int main()
{
    long long int t;
    scanf("%lld", &t);
    long long int i;
    for(i = 0; i < t; i++)
    {
        long long int n, k, j, N, L, D, sum = 0, A;
        scanf("%lld %lld", &n, &k);
        L = k -1;//Last Term
        D = n - 1;//Common Difference 
        if(L % D == 0)/*You can find No. of terms by dividing Last term with Common Difference*/
        {
            N = L / D;
        }
        else if(L < D)
        {
            N = 1;
        }
        else
        {
            N = L/D + 1;
        }
        A = L - (N - 1)*D;/*First term can be calculated from the known last term*/
        j = ((N%M) * ((N - 1)%M)) / 2%M;
        sum = ((N%M) * (A%M))%M + ((j%M) * (D%M))%M;
        printf("%lld\n", sum%M);
    }
    exit(0);
}


