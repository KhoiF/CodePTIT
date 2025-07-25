#include<stdio.h>
void swap(int *a, int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void xeptang(int a[],int n)
{
	for(int i=0 ;i<n-1; i++)
	{
		int check=0;
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				check=1;
				swap(&a[j],&a[j+1]);
			}
		}
		if(check==0) break;
	}
}
void xepgiam(int a[],int n)
{
	for(int i=0 ;i<n-1; i++)
	{
		int check=0;
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]<a[j+1])
			{
				check=1;
				swap(&a[j],&a[j+1]);
			}
		}
		if(check==0) break;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	for(int x=1; x<=t; x++)
	{
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		for(int i=0; i<n; i++)
			scanf("%d",&a[i]);
		for(int i=0; i<n; i++)
			scanf("%d",&b[i]);
		xeptang(a,n);
		xepgiam(b,n);
		int c[2*n];
		for(int i=0; i<2*n; i+=2)
		{
			c[i]=a[i/2];
		}
		for(int i=1; i<2*n; i+=2)
		{
			c[i]=b[i/2];
		}
		printf("Test %d:\n",x);
		for(int i=0; i<2*n; i++)
		{
			printf("%d ",c[i]);
		}
		printf("\n");
	}
}