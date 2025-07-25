#include<stdio.h>
int ucln(int a, int b)
{
	int tmg;
	while(b!=0)
	{
		tmg=a%b;
		a=b;
		b=tmg;
	}
	return a;
}
void solve()
{
	int a,b,c,d;
	scanf ("%d %d %d %d", &a, &b, &c, &d);
	if (ucln(a,b)==ucln(c,d)) printf ("YES\n");
	else printf ("NO\n");
}
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
	{
		solve();
	}
}