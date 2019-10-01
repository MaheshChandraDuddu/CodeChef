#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int frstterm(long long int fr, long long int lr, long long int num)
{
	long long int qu;
        
	if(fr % num == 0)
	{
		return fr;
	}
	else
	{
		qu = fr / num;
		num = num * qu + num;
		if(num >= fr && num <= lr)
		{
			return num;
		}
		else
		{
			return 0;
		}
	}
}

long long int lstterm(long long int fr, long int lr, long long int num)
{
	long long int qu;
	if(lr % num == 0)
	{
		return lr;
	}
	else
	{
		qu = lr / num;
		num = qu * num;
		if(num >= fr && num <= lr)
		{
			return num;
		}
		else
		{
			return 0;
		}
	}
}

long long int gcd(long long int a, long long int b)
{
	if(a == 0)
	{
		return b;
	}
	return gcd(b %a, a);
}

long long int lcm(long long int a, long int b)
{
	return (a*b)/gcd(a,b);
}

int main()
{
	long long int t;
	scanf("%lld", &t);
	while(t--)
	{
		long long int sum1 = 0, sum2 = 0, ps = 0, lsum = 0, ft, lt, ft1, ft2, lt2, lt1;
                long long int A, B, num, l, r, lr, fr, n = 0, n1 = 0, n2 = 0;
                
		scanf("%lld %lld %lld %lld", &A, &B, &l, &r);

		if(l <= r)
		{
			fr = l;
			lr = r;
		}
		else
		{
			fr = r;
			lr = l;
		}

		//printf("fr = %lld, lr = %lld\n", fr, lr);
                num = lcm(A, B);
		if(fr == lr)
		{
			if(fr % A == 0)
			{
				sum1 = fr;
			}
			if(lr % B == 0)
			{
				sum2 = lr;
			}
			ps = sum1 + sum2;
			if(fr % num == 0)
			{
				lsum = fr;
			}
		}
		else
		{
			ft = frstterm(fr, lr, A);
			lt = lstterm(fr, lr, A);
			ft1 = frstterm(fr, lr, B);
			lt1 = lstterm(fr, lr, B);
			if((lt - ft) % A == 0)
			{
				n = (lt - ft) / A + 1;
			}
			else
			{
				n = (lt - ft)/A + 2;
			}
			sum1 = (n * (ft + lt))/2;
			
			if((lt1 - ft1) % B == 0)
			{
				n1 = (lt1-ft1) / B + 1;
			}
			else
			{
				n1 = (lt1 - ft1)/B + 2;
			}
			sum2 = (n1 * (ft1 + lt1))/2;
			ps = sum1 + sum2;
			ft2 = frstterm(fr, lr, num);
			lt2 = lstterm(fr, lr, num);
			if(((lt2-ft2) %num) == 0)
			{
				n2 = ((lt2-ft2)/(num)) + 1;
			}
			else
			{
				n2 = ((lt2-ft2)/(num)) + 2;
			}
			lsum = (n2 * (ft2 + lt2))/2;
			/*printf("ft = %lld, lt = %lld\n", ft, lt);
			printf("ft1 = %lld, lt1 = %lld\n", ft1, lt1);
			printf("ft2 = %lld, lt2 = %lld\n", ft2, lt2);
			printf("n = %lld, n1 = %lld, n2 = %lld\n", n, n1, n2);
			printf("sum1 = %lld, sum2 = %lld\n", sum1, sum2);
			printf("ps = %lld, lsum = %lld\n", ps, lsum);*/
                        }
			if(abs(ps - lsum)%2 == 0 && (ps%2 == 0 || ps % 3 == 0))
			{
				printf("TRUE LOVE\n");
			}
			else if((abs(ps - lsum)%2 == 0) || (ps %2 == 0 || ps % 3 == 0))
			{
				printf("LOVE\n");
			}
			else
			{
				printf("FAKE LOVE\n");
			}
		//exit(0);
	}
	exit(0);
}
