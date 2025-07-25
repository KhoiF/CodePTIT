#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int x=1; x<=t; x++)
	{
		int m,n;
		scanf("%d %d", &m, &n);
		int a[m][n];
		int h[10]={0},c[10]={0};
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				scanf("%d",&a[i][j]);
				h[i]+=a[i][j];
			}
		}
		int hmax=0;
		for(int i=1; i<m; i++)
		{
			if(h[i]>h[hmax])
			{
				hmax=i;
			}
		}
		for(int i=0; i<m; i++)
		{
			if(i!=hmax)
			{
				for(int j=0; j<n; j++)
					c[j]+=a[i][j];
			}
		}
		int cmax=0;
		for(int j=1; j<n; j++)
		{
			if(c[j]>c[cmax])
			{
				cmax=j;
			}
		}
		printf("Test %d:\n",x);
		for(int i=0; i<m; i++)
		{
			if(i!=hmax)
			{
				for(int j=0; j<n; j++)
				{
					if(j!=cmax)
						printf("%d ",a[i][j]);
				}
				printf("\n");
			}
		}
	}
}