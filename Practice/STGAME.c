#include <stdio.h>
#include <stdlib.h>

//Compare Function as a parameter for Inbuilt Quick Sort Function
//LOL IDK ABOUT IT
int cmpare(const void *x, const void *y)
{
    return (*(int*)x - *(int*)y);
}


int main(void) {
	// your code goes here
	int t, i, j;
	scanf("%d", &t);
	
	for(i = 0; i < t; i++)
	{
	    int n;
	    scanf("%d", &n);
	    int arr[n], arr1[n];
	    for(j = 0; j < n; j++)
	    {
	        scanf("%d", &arr[j]);
	    }
	    for(j = 0; j < n; j++)
	    {
	        scanf("%d", &arr1[j]);
	    }
	    qsort(arr, n, sizeof(int), cmpare);
	    qsort(arr1, n, sizeof(int), cmpare);
	    //printf("%d,%d,", arr[n - 1], arr[n - 2]);
	    //printf("%d,%d,", arr1[n - 1], arr1[n - 2]);
	    
	    if((arr[n - 1] + arr[n - 2]) > (arr1[n - 1] + arr1[n - 2]))
	    {
	        printf("AAYUSHI\n");
	    }
	    else
	    {
	        printf("DAKSH\n");
	    }
	 }
	return 0;
}

