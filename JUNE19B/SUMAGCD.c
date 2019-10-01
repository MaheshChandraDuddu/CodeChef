#include <stdio.h>
#include <stdlib.h>



int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    else
    {
        return(gcd(b % a, a));
    }
}
int removeDuplicates(int arr[], int n) 
{ 
    if (n==0 || n==1) 
        return n; 
  
    int j = 0; 
  
    for (int i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n-1]; 
  
    return j; 
} 
int cmpf(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}


int main()
{
    int t, i;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n], N, x, j, k, d[n], temp, m, dup = 1;
        N = n;
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            d[j] = 0;
            if(j != 0)
            {
                if(arr[j] == arr[j - 1])
                {
                    dup++;
                }
            }
           // copy[j] = arr[j];
        }
       // mergeSort(arr, 0, n - 1);
        qsort(arr, n, sizeof(int), cmpf);
        n = removeDuplicates(arr, n);
        
        
        for(j = 0; j <= n - 2; j++)
        {
            d[j + 1] = gcd(d[j], arr[j]);
        }
        m = arr[n - 1] + d[n - 1];
        temp = arr[n - 1];
        j = n - 2;
        //m = sumagcd(arr, d, temp, j, m);
        while(j > 0 && arr[j] + temp > m)
        {
            /*while(arr[j] > arr[j - 1])
            {
                j = j - 1;
            }*/
            if((arr[j] + gcd(temp, d[j])) > m)
            {
                m = arr[j] + gcd(temp, d[j]);
            }
            else
            {
                m = m;
            }
            temp = gcd(temp, arr[j]);
            j = j - 1;
        }
        if(dup == 1)
        {
            printf("%d\n", m);
        }
        else if(dup == N)
        {
            printf("%d\n", 2*m);
        }
        else
        {
            printf("%d\n", m);
        }
    }
}
