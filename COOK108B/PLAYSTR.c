#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n, i = 0, j = 0, n1 = 0, n2 = 0;
	    scanf("%d", &n);
	    char s[n+1], s1[n+1];
	    scanf("%s", s);
	    scanf("%s", s1);
	    
	    while(s[i] != '\0')
	    {
	       if(s[i] == '1')
	       {
	           n1++;
	       }
	       if(s1[i] == '1')
	       {
	           n2++;
	       }
	       i++;
	    }
	    /*while(s1[j] != '\0')
	    {
	        if(s1[j] == '1')
	        {
	            n2++;
	        }
	    }*/
	    if(n1 == n2)
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

