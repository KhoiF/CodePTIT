#include<stdio.h>
void swap(int *a, int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(int i=0; i<n-1; i++)
	{
		int min=a[i],id=i;
		for(int j=i; j<n; j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				id=j;
			}
		}
		swap(&a[i],&a[id]);
		for(int k=0; k<n; k++)
		{
			printf("%d ", a[k]);
		}
		printf("\n");
	}
}