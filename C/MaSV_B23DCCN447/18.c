#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int test=1; test<=t; test++)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		int a[n][m],b[m][n],c[n][n];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				b[i][j]=a[j][i];
			}
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				long long res=0;
				for(int k=0; k<m; k++)
				{
					res+=a[i][k]*b[k][j];
				}
				c[i][j]=res;
			}
		}
		printf("Test %d:\n",test);
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
}