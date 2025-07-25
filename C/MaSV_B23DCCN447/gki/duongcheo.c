#include<stdio.h>
void swap(int *a, int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
signed main()
{
	int m;
	scanf("%d",&m);
	int a[m][m];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(i==j) swap(&a[i][j],&a[i][m-1-i]);
		}
	}
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<m; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}