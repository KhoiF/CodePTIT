#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	int x=1;
	for(int i=0; i<=n/2; i++)
	{
		for(int j=i; j<n-i; j++)
		{
			a[i][j]=x;
			x++;
		}
		for(int j=i+1; j<n-i; j++)
		{
			a[j][n-i-1]=x;
			x++;
		}
		for(int j=n-i-2; j>=i; j--)
		{
			a[n-i-1][j]=x;
			x++;
		}
		for(int j=n-i-2; j>i; j--)
		{
			a[j][i]=x;
			x++;
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