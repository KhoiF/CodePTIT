#include<stdio.h>
void swap(int *a, int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int c[m][n];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	int a,b;
	scanf("%d %d",&a,&b);
	a--;b--;
	for(int i=0; i<m; i++)
	{
		swap(&c[i][a],&c[i][b]);
	}
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}