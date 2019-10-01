#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t, i, j;
	scanf("%d", &t);

	for(i = 0; i < t; i++)
	{
		int d, at = 0, way = 0;
		scanf("%d", &d);
		char s[d];
		scanf("%s", s);
		for(j = 0; j < d; j++)
		{
			if(s[j] == 'P')
			{
				at++;
			}
		}
		s[j] = '\0';
		if((float)at / d  >= 0.75)
		{
			printf("%d\n", way);
		}
		else
		{
			for(j = 0; s[j] != '\0'; j++)
			{
				if(s[j] == 'A')
				{
					if(j - 2 >= 0 && j + 2 <= d - 1)
					{
						if((s[j - 2] == 'P' || s[j - 1] == 'P') && (s[j + 2] == 'P' || s[j + 1] == 'P'))
						{
							//s[j] = 'P';
							at++;
							way++;
							
							if((float)at/d >= 0.75)
							{
								break;
							}
						}
					}
				}
			}
			if((float)at/d >= 0.75)
			{
				printf("%d\n", way);
			}
			else
			{
				printf("-1\n");
			}
		}
	}
	exit(0);
}



