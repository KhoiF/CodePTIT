#include<stdio.h>
int main()
{
	int n;
	scanf ("%d", &n);
	int a[n],chan[1001],le[1001];
	int c=0,l=0;
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		if(a[i]%2==0) 
		{
			chan[c]=a[i];
			c++;
		}
		else
		{
			le[l]=a[i];
			l++;
		}
	}
	for(int i=0; i<c; i++)
		printf ("%d ", chan[i]);
	printf ("\n");
	for(int j=0; j<l; j++)
		printf ("%d ", le[j]);
}