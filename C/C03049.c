#include<stdio.h>
int check(long long n)
{
	long long tmp=n;
	int chan=0,le=0;
	while(n>0)
	{
		if((n%10)%2==0) chan++;
		else le++;
		n/=10;
	}
	if(chan<le && tmp%2==1) return 1;
	else return 0;
}
int main()
{
	int t;
	scanf ("%d", &t);
	while(t--)
	{
		long long n;
		scanf ("%lld", &n);
		if (check(n)==1) printf ("YES\n");
		else printf ("NO\n");
	}
}