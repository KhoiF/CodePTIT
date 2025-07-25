#include<stdio.h>
#include<math.h>
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
	scanf("%d %d",&a, &b);
	int u=ucln(a,b);
	printf ("%d\n", u);
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