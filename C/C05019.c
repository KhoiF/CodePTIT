#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool snt(int n)
{
	if(n==1) return 0;
	int sqr=sqrt(n);
	for(int i=2; i<n; i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int d[361];
	int id=0;
	for(int i=2; i<=2437; i++)
	{
		if(snt(i))
		{
			d[id]=i;
			id++;
		}
	}
	int t;
	scanf("%d",&t);
	for(int test=1; test<=t; test++)
	{
		int n,j=0;
		scanf("%d",&n);
		int a[n][n];
		for(int k=0; k<=n/2; k++)
		{
			for(int h=k; h<n-k; h++)
			{
				a[k][h]=d[j];
				j++;
			}
			for(int h=k+1; h<n-k; h++)
			{
				a[h][n-1-k]=d[j];
				j++;
			}
			for(int h=n-2-k; h>=k; h--)
			{
				a[n-1-k][h]=d[j];
				j++;
			}
			for(int h=n-2-k; h>k; h--)
			{
				a[h][k]=d[j];
				j++;
			}
		}
		printf("Test %d:\n",test);
		for(int i=0; i<n; i++)
		{
			for(int k=0; k<n; k++)
			{
				printf("%d ",a[i][k]);
			}
			printf("\n");
		}
	}
}