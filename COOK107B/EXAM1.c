#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int N, i, j = 0, score = 0;
		scanf("%d", &N);
		char s[N], s1[N];
		scanf("%s", s);
		scanf("%s", s1);
                
		for(i = 0; i < N;)
		{
			if(s1[i] == s[i])
			{
				score++;
				i++;
			}
			else if(s1[i] != s[i] && s1[i] != 'N')
			{
				i = i + 2; 
			}
			else
			{
				i++;
			}
		}
		printf("%d\n", score);
	}
	exit(0);
}
