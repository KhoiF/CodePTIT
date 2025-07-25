#include<stdio.h>
void solve()
{
	int n;
	scanf ("%d", &n);
	int a[101];
	for (int i=0; i<n; i++)
	{
		scanf ("%d", &a[i]);
	}
	for (int i=0; i<n; i++)
	{
		if (a[i]%2==0) printf ("%d ",a[i]);
	}
	printf ("\n");
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