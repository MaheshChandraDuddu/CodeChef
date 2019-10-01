#include <stdio.h>

int main(void) {
	long long int m=1000000007;
	int a[1000001];
	a[1]=1;
	for(int i=2;i<=1000001;i++){
	       a[i]=(((i%m)+a[i-1]%m)%m+(i%m*a[i-1]%m)%m)%m;
	       
	}
	int t,n;
	scanf("%d",&t);
	while(t--){
	        scanf("%d",&n);
	        printf("%d\n",a[n]);
	}
	return 0;
}


