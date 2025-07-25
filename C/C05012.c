#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int y=1; y<=t; y++)
	{
		int n;
		scanf("%d",&n);
		int a[n][n],b[n][n],c[n][n];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<=i; j++)
			{
				a[i][j]=(j+1);
			}
			for(int j=i+1; j<n; j++)
			{
				a[i][j]=0;
			}
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				b[i][j]=a[j][i];
			}
		}
		for(int i=0; i<n; i++)
		{
			for(int k=0; k<n; k++)
			{
				int res=0;
				for(int j=0; j<n; j++)
				{
					res+=a[i][j]*b[j][k];
				}
				c[i][k]=res;
			}
		}
		printf("Test %d:\n",y);
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}