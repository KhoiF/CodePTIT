#include<stdio.h>
int main()
{
	int m,n;
	scanf ("%d %d", &m, &n);
	char c;
	if (m>=n) c=96+m;
	else c=96+n;
	for (int i=1; i<=m; i++)
	{
		if (i<=n)
		{
			for (int j=1; j<=i; j++) printf ("%c", c-j+1);
			for (int k=i; k<n; k++) printf ("%c", c-i+1);
		}
		else 
		{
			for (int j=1; j<=n; j++) printf ("%c", c-j+1);
		}
		printf ("\n");
	}
}