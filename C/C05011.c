#include<stdio.h>
void solve()
{
	
}
int main()
{
	int t;
	scanf("%d",&t);
	for(int y=1; y<=t; y++)
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
			for(int k=0; k<n; k++)
			{
				int res=0;
				for(int j=0; j<m; j++)
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