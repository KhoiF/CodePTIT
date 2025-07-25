#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int f[n*n];
	f[0]=0;f[1]=1;
	for(int i=2;i<n*n; i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	int id=0;
	int a[n][n];
	for(int i=0; i<=n/2; i++)
	{
		for(int j=i; j<n-i; j++)
		{
			a[i][j]=f[id];
			id++;
		}
		for(int j=i+1; j<n-i; j++)
		{
			a[j][n-1-i]=f[id];
			id++;
		}
		for(int j=n-2-i; j>=i; j--)
		{
			a[n-1-i][j]=f[id];
			id++;
		}
		for(int j=n-2-i; j>i; j--)
		{
			a[j][i]=f[id];
			id++;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}