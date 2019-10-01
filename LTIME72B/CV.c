#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t, i, count = 0, n, j, k;
	scanf("%d", &t);
	if(t < 1 || t > 100)
	{
		exit(1);
	}

	for(k = 1; k <= t; k++)
	{
		scanf("%d", &n);
		/*if(n < 1 || n > 100)
		{
			exit(2);
		}*/
		char s[n];
		scanf("%s", s);
		for(i = 0, j = 1; i < n - 1 && j < n; i++, j++)
		{
			if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
			{
				if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
				{
					count++;
				}
			}
		}
		printf("%d\n", count);
		count = 0;
	}
	exit(0);
}

