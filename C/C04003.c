#include<stdio.h>
void solve()
{
	int n;
	scanf ("%d", &n);
	int a[101];
	for (int i=0;i<n;i++)
	{
		scanf ("%d", &a[i]);
	}
	int check=1;
	for (int i=0; i<n/2; i++)
	{
		if (a[i]!=a[n-1-i]) check=0;
	}
	if (check==1) printf ("YES\n");
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