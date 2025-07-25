#include<stdio.h>
int tn(long long x)
{
	int tmp=x, x1=0;
	while(x>0)
	{
		x1=x1*10 + x%10;
		x/=10;
	}
	if (x1==tmp) return 1;
	return 0;
}
void solve()
{
	long long n;
	scanf("%lld", &n);
	int cuoi=n%10;
	n/=10;
	long long n1=0;
	while (n>0)
	{
		n1=n1*10 + n%10;
		n/=10;
	}
	int dau=n1%10;
	n1/=10;
	if (tn(n1)==1 && (dau==2*cuoi || cuoi==2*dau))
		printf ("YES\n");
	else
		printf ("NO\n");
}
int main()
{
	int t;
	scanf ("%d",&t);
	while(t--)
	{
		solve();
	}
}