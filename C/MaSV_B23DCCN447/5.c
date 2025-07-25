#include<stdio.h>
void insertsort(int a[],int n)
{
	int key,x;
	for(int i=0; i<n; i++)
	{
		key=a[i];
		x=i-1;
		while(x>=0 && a[x] > key)
		{
			a[x+1]=a[x];
			x--;
		}
		a[x+1]=key;
		printf("Buoc %d: ",i);
		for(int j=0; j<=i; j++)
		{
			printf("%d ",a[j]);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	insertsort(a,n);
}