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
	int check=0;
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]<a[j+1]) 
				swap(&a[j],&a[j+1]);
				check=1;
		}
		if(check==0)
			break;
	}
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
}