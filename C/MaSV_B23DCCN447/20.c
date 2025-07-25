#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool snt(int n)
{
	if(n==1) return 0;
	int sqr=sqrt(n);
	for(int i=2; i<=sqr; i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int h[31]={0};
	int a[n][n];
	for(int i=0 ;i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d",&a[i][j]);
			if(snt(a[i][j]))
				h[i]++;
		}
	}
	int max=0,tmp=h[0];
	for(int i=1; i<n; i++)
	{
		if(tmp<h[i])
		{ 
			max=i;
			tmp=h[i];
		}
	}
	printf("%d\n",max+1);
	for(int j=0; j<n; j++)
	{
		if(snt(a[max][j]))
		{
			printf("%d ",a[max][j]);
		}
	}
}