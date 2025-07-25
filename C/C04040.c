#include<stdio.h>
long long max(long long a, long long b)
{
	return(a>=b)? a:b;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0; i<n; i++)
		{
			scanf("%d",&a[i]);
		}
		long long ans=-1000000000,s=0;
		for(int i=0; i<n; i++)
		{
			s=max(a[i],s+a[i]);
			ans=max(ans,s);
		}
		printf("%lld\n",ans);
	}
}