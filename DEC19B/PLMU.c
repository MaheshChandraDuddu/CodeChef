#include <stdio.h>
#include <stdlib.h>

int cmpf(const void *a, const void *b)
{
    return((*(int *)a) - (*(int *)b));
}

long long int last_occurrence(long long int arr[], long long int low, long long int high, long long elem, long long int n)
{
    if(high >= low)
    {
        long long int mid = (low +(high - low)/2);

        if(mid == n-1 || (elem < arr[mid+1] && arr[mid] == elem))
        {
            return mid;
        }
        else if(elem < arr[mid])
        {
            return last_occurrence(arr, low, (mid-1), elem, n);
        }
        else
        {
            return last_occurrence(arr, (mid+1), high, elem, n);
        }  
    }
    return -1;
}
  
 
  


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int N;
        scanf("%lld", &N);
        long long int A[N], i, cnt = 0;
        for(i = 0; i < N; i++)
        {
            scanf("%lld", &A[i]);
        }
        qsort(A, N, sizeof(long long int), cmpf);
        for(i = 0; i < N; )
        {
            long long int end = last_occurrence(A, i, N - 1, A[i], N);
            long long int n = end - i+1;
            cnt += (n*(n-1))/2;//NC2 formula man! :)
            i = end + 1;
        }
        printf("%lld\n", cnt);
    }
}