#include<stdio.h>
int ucln(int m, int n)
{
	int tmg;
	while (n!=0)
	{
		tmg=m%n;
		m=n;
		n=tmg;
	}
	return m;
}
int main()
{
	int a,b;
	scanf ("%d %d", &a, &b);
	int i=a;
	while (i<=b)
	{
		for (int j=i+1; j<=b; j++)
		{
			if (ucln(i,j)==1) printf ("(%d,%d)\n", i, j);
		}
		i++;
	}
}