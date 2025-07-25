#include<stdio.h>
#include<stdbool.h>
#include<math.h>
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
	scanf("%d", &n);
	int a[n];
	int dem=0;
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		if(snt(a[i])) dem++;
	}
	printf("%d ", dem);
	for(int i=0; i<n; i++)
	{
		if(dem==0) break;
		if(snt(a[i])) 
		{
			printf("%d ", a[i]);
			dem--;
		}
	}
}