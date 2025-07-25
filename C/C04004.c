#include<stdio.h>
int main()
{
	int t;
	scanf ("%d", &t);
	while(t--)
	{
		int n;
		scanf ("%d", &n);
		long long a[94];
		a[0]=0;
		a[1]=1;
		a[2]=1;
		for (int i=3; i<=n; i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		printf ("%lld\n", a[n]);
	}
}