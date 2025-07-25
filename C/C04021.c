#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[100],b[100];
	for (int i=0; i<n; i++)
	{
		scanf ("%d", &a[i]);
	}
	int x;
	scanf ("%d", &x);
	for(int i=n-x; i<n; i++)
	{
		b[i-n+x]=a[i];
	}
	for(int j=x; j<n; j++)
	{
		b[j]=a[j-x];
	}
	for(int i=0; i<n; i++)
		printf ("%d ", b[i]);
}