#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n, k;
	    scanf("%d %d", &n, &k);
	    int num_c = 0, num, i;
	    for(i = 0; i < n; i++)
	    {
	        scanf("%d", &num);
	        if(num != 1)
	        {
	            num_c++;
	        }
	    }
	    //a_i has to be 1 :)
	    if(num_c <= k)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

