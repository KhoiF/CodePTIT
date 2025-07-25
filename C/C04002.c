#include<stdio.h>
#include<math.h>
int snt(int a)
{
	for (int i=2; i<=sqrt(a); i++)
	{
		if (a%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int T;
	scanf ("%d", &T);
	while(T--)
	{
		int n;
		scanf ("%d", &n);
		int a[n];
		for (int i=0; i<n; i++)
		{
			scanf ("%d", &a[i]);
		}
		for (int i=0; i<n; i++)
		{
			if (snt(a[i])==1 && a[i]!=1) printf ("%d ",a[i]);
		}
	printf ("\n");	
	}
}