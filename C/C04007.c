#include<stdio.h>
int main()
{
	int n,m,k;
	scanf ("%d %d", &n, &m);
	int a[n], b[m];
	for (int i=0; i<n; i++)
	    scanf ("%d", &a[i]);
	for (int i=0; i<m; i++)
		scanf ("%d", &b[i]);
	scanf ("%d", &k);
	for (int j=0; j<k; j++)
		printf ("%d ", a[j]);
	for (int j=0; j<m; j++)
		printf ("%d ", b[j]);
	for (int j=k; j<n; j++)
		printf ("%d ", a[j]);
}