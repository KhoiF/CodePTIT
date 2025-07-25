#include<stdio.h>
int ucln(int a, int b)
{
	int tmp;
	while(b!=0)
	{
		tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}
void solve()
{
	int a,b;
	scanf ("%d %d", &a, &b);
	int uc=ucln(a,b);	
	long long bc=((long long)a*(long long)b)/uc;
	printf ("%lld %d", bc, uc);
	printf ("\n");
}
	
int main()
{
	int t;
	scanf ("%d", &t);
	while(t--)
	{
		solve();
	}
}