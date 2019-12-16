#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int N, i, check = 0;
        scanf("%d", &N);
        char s[N+1];
        scanf("%s", s);
        int freq[26] = {0}, freq1[26] = {0}, loplalkiochindi = 0, ans = 1;
        for(i = 0; i < N; i++)
        {
           if(freq[(int)s[i] - 'a'] == 0)
           {
               freq1[(int)s[i] - 'a'] = i;
           }
           else
           {
               if(loplalkiochindi == 0)//LOL
               {
                   ans = i - freq1[(int)s[i]-'a'];
               }
               else
               {
                   if((i-freq1[(int)s[i]-'a']) < ans)
                   {
                       ans = i - freq1[(int)s[i]-'a'];
                   }
               }
               freq1[(int)s[i] - 'a'] = i;
               loplalkiochindi = 1;
           }
           freq[(int)s[i]-'a']++;
           if(freq[(int)s[i] - 'a'] > 1)
           {
               check = 1;
           }
        }
        if(check == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", N - ans);
        }
        
    }
    exit(0);
}