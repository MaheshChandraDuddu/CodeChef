/************************** :( ****************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int N, M, i, j;
		scanf("%lld %lld", &N, &M);
		long long int C[M + 1], prof = 0, count = 0;
                
		for(i = 1; i <= M; i++)
		{
			scanf("%lld", &C[i]);
			count += C[i];
		}
                
		long long int D[N + 1], B[N + 1], F[N + 1], order[N + 1];
		for(i = 1, j = 1; i <= N && j <= N; i++, j++)
		{
			scanf("%lld %lld %lld", &D[i], &F[i], &B[i]);
			if(C[D[i]] != 0)
			{
				prof = prof + F[i];
				C[D[i]]--;
				order[j] = D[i];
			}
			else
			{
				/*if(i - 1 >= 1 && C[D[i-1]] != 0)
				{
					C[D[i-1]]--;
					prof = prof + B[i];
				}
				else if(i+1 <= N && C[D[i+1]] != 0)
				{
					C[D[i+1]]--;
					prof = prof + B[i];
				}*/
				prof = prof + B[i];
				order[j] = 0;//Will Do it later :)
			}
		}	

		printf("%lld\n", prof);

		for(i = 1, j = 1; i <= N && j <= N; i++)
		{
			if(order[i] != 0)
			{
				//printf("%lld", order[i]);
			}
			else
			{
				while(order[i] == 0)
				{
					if(C[j] != 0)
					{
						C[j]--;
						order[i] = j;
					}
					else
					{
						j++;
					}
				}
			}
			printf("%lld ", order[i]);
		}
		printf("\n");
	}
	exit(0);
}



		

