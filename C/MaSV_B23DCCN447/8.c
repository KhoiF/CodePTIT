#include<stdio.h>
int max(int a,int b)
{
	return (a>=b) ? a:b;
}
int main()
{
	int t;
	scanf("%d",&t);
	for(int x=1; x<=t; x++)
	{
		int n;
		scanf("%d",&n);
		int a[n],d[100]={0};
		for(int i=0; i<n; i++)
		{
			scanf("%d",&a[i]);
			d[i]++;
		}
		int b=0,e=0,l=0;
		for(int i=1; i<n; i++)
		{
			if(a[i]>a[i-1])
			{
				e=i;
				d[b]++;
				l=max(l,e-b+1);
			}
			else
			{
				b=i;
				e=i;
			}
		}
		printf("Test %d:\n",x);
		printf("%d\n",l);
		for(int i=0; i<n; i++)
		{
			if(d[i]==l)
			{
				for(int j=i; j<i+l; j++)
				{
					printf("%d ",a[j]);
				}
				printf("\n");
			}
		}
	}
}