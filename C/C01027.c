#include<stdio.h>
int ucln(int m,int n)
{
	int tmg;
	while(n!=0)
	{
		tmg=m%n;
		m=n;
		n=tmg;
	}
	return m;
}
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
	{
		int a,b;
		scanf ("%d %d", &a, &b);
		printf ("%d\n", ucln(a,b));
	}
}