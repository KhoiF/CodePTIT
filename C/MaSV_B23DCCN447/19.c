#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int test=1; test<=t; test++)
	{
		int n;
		scanf("%d",&n);
		int a[n][n],b[n][n],c[n][n];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(j<=i)
					a[i][j]=j+1;
				else
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
			for(int j=0; j<n; j++)
			{
				long long res=0;
				for(int k=0; k<n; k++)
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