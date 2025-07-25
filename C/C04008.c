#include<stdio.h>
int main()
{
	int T;
	scanf ("%d", &T);
	for (int x=1; x<=T; x++)
	{
		int n,m,p;
		scanf ("%d %d %d", &n, &m, &p);
		int a[n], b[m];
		for (int i=0; i<n; i++)
		    scanf ("%d", &a[i]);
		for (int i=0; i<m; i++)
			scanf ("%d", &b[i]);
		printf ("Test %d:\n", x);
		for (int j=0; j<p; j++)
			printf ("%d ", a[j]);
		for (int j=0; j<m; j++)
			printf ("%d ", b[j]);
		for (int j=p; j<n; j++)
			printf ("%d ", a[j]);
		printf ("\n");
	}
}