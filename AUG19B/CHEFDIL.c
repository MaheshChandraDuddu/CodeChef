#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[100002];
        scanf("%s", s);
        int i, len = 0, cnt1 = 0;
        len = strlen(s);
        //printf("len = %d\n", len);
        for(i = 0; i < len; i++)
        {
            if(s[i] == '1')
            {
                cnt1++;
            }
        }
     
        if(cnt1%2 != 0)
        {
            printf("WIN\n");
        }
        else 
        {
            printf("LOSE\n");
        }
        
    }
    exit(0);
}
