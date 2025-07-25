#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int x=1;
	while(t--)
	{
		int n,m;
		scanf("%d %d", &n, &m);
		int a[n][m];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n",x);
		x++;
		for(int i=1; i<n; i++)
		{
			for(int j=1; j<m; j++)
				printf("%d ",a[i][j]);
			printf("\n");	
		}
		printf("\n");
	}
}