#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool snt(long long n)
{
	long long sqr=sqrt(n);
	for(int i=2; i<=sqr; i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
long long uoc(long long n)
{
	long long sqr=sqrt(n),m=1;
	for(int i=1; i<=sqr; i++)
	{
		if(n%i==0)
		{
			if(snt(n/i)) return (n/i);
			if(snt(i)) m=i;
		}
	}
	return m;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		printf("%lld\n",uoc(n));
	}
}