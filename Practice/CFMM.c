#include <stdio.h>
//#include <string.h>
/********************** MADE IT COMPLEX :( ******************************/

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int i, n, c_count = 0, o_count = 0, d_count = 0, e_count = 0, h_count = 0, f_count = 0;
	    scanf("%d", &n);
	    char s[100000]; 
	    int sum = 0, k;
	    for(i = 0; i < n; i++)
	    {
	        scanf("%s", s);
	        int j = 0;
	        while(s[j] != '\0')
	        {
	            if(s[j] == 'c')
	            {
	                c_count++;
	            }
	            else if(s[j] == 'o')
	            {
	                o_count++;
	            }
	            else if(s[j] == 'd')
	            {
	                d_count++;
	            }
	            else if(s[j] == 'e')
	            {
	                e_count++;
	            }
	            else if(s[j] == 'h')
	            {
	                h_count++;
	            }
	            else if(s[j] == 'f')
	            {
	                f_count++;
	            }
	            j++;
	        }
	       /* if(c_count%2 >= 0 && e_count%2 >= 0 && o_count % 2 != 0 && d_count%2 > 0 && h_count%2 > 0 && f_count%2 > 0)
	        {
	            sum = sum + c_count + o_count + d_count + e_count + h_count + f_count;
	        }*/
	    }
	    //printf("c = %d, o = %d, d = %d, e = %d, h = %d, f = %d\n", c_count, o_count, d_count, e_count, h_count, f_count);
	    k = 2, i = 1;
	    while(c_count >= k && e_count >= k && o_count >= i && d_count >= i && h_count >= i && f_count >= i)
	    {
	        sum++;
	        k = k + 2;
	        i = i + 1;
	    }
	    printf("%d\n", sum);
	    //
	}
	return 0;
}


