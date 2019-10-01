#include<stdio.h>
long int maxValue(long int a,long int b)
{
	if(a>b)
	return a;
	return b;
}
int main()
{
	int t,i,n;long int max;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);long int a[n+1],dp[n+1];max=0;
		for(i=1;i<=n;i++)
		{
			scanf("%ld",&a[i]);dp[i]=0;
		}
		dp[1]=a[1];
		if(a[2]>a[1])
		dp[2]=a[2]*2+a[1];
		else
		dp[2]=a[1]*2+a[2];
		max=dp[2];
		for(i=3;i<=n;i++)
		{
		    //printf("1sst = %ld, 2nd = %ld\n", a[i]*(i-1)+a[i-1]*i+dp[i-2], max + a[i]*i);
			dp[i]=maxValue(a[i]*(i-1)+a[i-1]*i+dp[i-2],max+a[i]*i);
			max=dp[i];
		}
		printf("%ld\n",max);
	}
	return 0;
}
