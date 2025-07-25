#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool snt(int n)
{
	if(n==1) return 0;
	int sqr=sqrt(n);
	for(int i=2; i<=sqr; i++)
	{
		if(n%i==0) 
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	long long s=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			if(snt(a[i][j]))
				s+=a[i][j];
		}
	}
	printf("%lld\n",s);
}