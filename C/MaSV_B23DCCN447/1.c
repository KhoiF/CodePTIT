#include<stdio.h>
void solve()
{
	int n;
	scanf("%d",&n);
	int a[n],d[30001]={0};
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		d[a[i]]++;
	}
	int max=d[a[0]];
	for(int i=1; i<n; i++)
	{
		if(d[a[i]]>max)
			max=d[a[i]];
	}
	for(int i=0; i<n; i++)
	{
		if(d[a[i]]==max) 
		{
			d[a[i]]=0;
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
}