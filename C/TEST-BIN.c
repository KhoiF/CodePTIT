#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	long long s=0,x=1;
	while(n!=0)
	{
		s=s+(n%2)*x;
		x*=10;
		n/=2;
	}
	printf("%lld", s);
}