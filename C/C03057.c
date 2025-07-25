#include<stdio.h>
long long rmin(long long n)
{
	long long tmp=0,x=1;
	while(n!=0)
	{
		if(n%10!=6)
		{
			tmp=tmp+(n%10)*x;
		}
		else
		{
			tmp=tmp+5*x;
		}
		x*=10;
		n/=10;
	}
	return tmp;
}
long long rmax(long long n)
{
	long long tmp=0,x=1;
	while(n!=0)
	{
		if(n%10!=5)
		{
			tmp=tmp+(n%10)*x;
		}
		else
		{
			tmp=tmp+6*x;
		}
		x*=10;
		n/=10;
	}
	return tmp;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long x1,x2;
		scanf("%lld %lld", &x1, &x2);
		long long min1=rmin(x1),min2=rmin(x2);
		long long max1=rmax(x1),max2=rmax(x2);
		printf("%lld %lld",min1+min2, max1+max2);
		printf("\n");
		
	}
}