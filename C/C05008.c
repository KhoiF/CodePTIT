#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int test=1; test<=t; test++)
	{
		int m,n;
		scanf("%d %d",&m,&n);
		int ar[m][n];
		int h,c;
		int th=0,tc=0;
		for(int i=0; i<m; i++)
		{
			int sum=0;
			for(int j=0; j<n; j++)
			{
				scanf("%d", &ar[i][j]);
				sum+=ar[i][j];
			}
			if(sum>th) 
			{
				th=sum;
				h=i;
			}
		}
		for(int i=0; i<n; i++)
		{
			int sum=0;
			for(int j=0; j<m; j++)
			{
				if(j==h)
					continue;
				sum+=ar[j][i];
			}
			if(sum>tc) 
			{
				tc=sum;
				c=i;
			}
		}
		printf("Test %d:\n",test);
		for(int i=0; i<m; i++)
		{
			if(i!=h)
			{
				for(int j=0; j<n; j++)
				{
					if(j!=c)
						printf("%d ",ar[i][j]);
				}
				printf("\n");
			}
		}
	}
}
