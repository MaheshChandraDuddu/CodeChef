#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int cmpf(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
 int x;     
 inline fastRead()
{
 register char ch=0;
 while (ch<33) ch=getchar();
 x=0;
 while (ch>33)
 {
     x=x*10+ch-'0';
     ch=getchar();
 }
 return x;
}

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    
    int L[n1], R[n2]; 
  

    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    i = 0;  
    j = 0; 
    k = l;  
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  

void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 

        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 



int main()
{
    int t;
    t =fastRead();
    //scanf("%d", &t);
    while(t--)
    {
        int N, min, max;
        //scanf("%d", &N);
        N = fastRead();
        int C[N], H[N], i, j, M[N], cnt = 0, low, high, k;
        
        /* for(i = 0; i < N; i++)
        {
            M[i] = 0;
        }*/
        for(i = 0; i < N; i++)
        {
            C[i] = fastRead();
            //scanf("%d", &C[i]);
            M[i] = 0;
        }
        
        for(i = 0; i < N; i++)
        {
            if(i+1 - C[i] <= 0)
            {
                low = 0;
            }
            else
            {
                low = i-C[i];
            }
            if(i+1 + C[i] >= N)
            {
                high = N-1;
            }
            else
            {
                high = i+C[i];
            }
            M[low]++;
            if(high != N-1)
            {
                M[high+1]--;
            }
            //printf(" Low = %d,High = %d\n", low, high);
           /*for(j = low - 1, k = 0; j >= k; j--, k++)
            {
                if(j == k)
                {
                    M[j]--;
                }
                else
                {
                    M[j]--;
                    M[k]--;
                }
            }
            for(j = high + 1, k = N-1; j <= k; j++, k--)
            {
                if(j == k)
                {
                    M[j]--;
                }
                else
                {
                    M[j]--;
                    M[k]--;
                }
            }*/
        }
        for(i = 1; i < N; i++)
        {
            M[i] += M[i-1];
        }
        for(i = 0; i < N; i++)
        {
           H[i] = fastRead();
           // C[i] = M[i];
            //scanf("%d", &H[i]);
            if(i == 0)
            {
                min = H[i];
                max = H[i];
            }
            if(H[i] > max)
            {
                max = H[i];
            }
            if(H[i] < min)
            {
                min = H[i];
            }
        }
        
       // qsort(C, N, sizeof(long long int), cmpf);
        qsort(M, N, sizeof(int), cmpf);
        
        if(min == M[0] && max == M[N-1])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        /* for(i = 0; i < N; i++)
        {
            printf("C[%lld] = %lld, H[%lld] = %lld, M[%lld] = %lld\n", i, C[i], i, H[i], i, M[i]);
        }*/
        
    }
    exit(0);
}













