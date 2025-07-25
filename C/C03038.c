#include<stdio.h>
void solve()
{
	int n,p;
	scanf("%d %d", &n, &p);
	int x=0;
	for(int i=p; i<=n/p*p; i++)
	{
		int dem=0,tmp=i;
		if(tmp%p==0)
		{
			while(tmp%p==0)
			{
				dem++;
				tmp/=p;
			}	
		}
		x+=dem;
	}
	printf("%d\n",x);
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		solve();
	}
}