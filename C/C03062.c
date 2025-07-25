#include<stdio.h>
long long uc(long long a, long long b)
{
	while(b!=0)
	{
		long long tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}
long long bc(long long a, long long b)
{
	return (a/uc(a,b)*b);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,m,i;
		scanf("%lld %lld",&n,&m);
		long long b=1;
		for(i=n; i<=m; i++)
		{
			b=bc(b,i);
		}
		printf("%lld\n", b);
	}
}