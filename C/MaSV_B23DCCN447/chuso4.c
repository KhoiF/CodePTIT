#include<stdio.h>
#include<math.h>
int check(int n)
{
	int tmp=n;
	int res=0,sum=0;
	while(n>0)
	{
		int x=n%10;
		if(x==4)
			return 0;
		sum+=x;
		res=res*10+x;
		n/=10;
	}
	if(res==tmp && sum %10==0) 
		return 1;
	return 0;
}
void solve()
{
	int n;
	scanf ("%d", &n);
	int l=pow(10, n-1);
	int r= pow(10,n) -1;
	for (int i=l; i<=r; i++)
		if(check(i)==1) printf ("%d ", i);
	printf ("\n");
}
int main()
{
	int t;
	scanf ("%d", &t);
	while(t--)
	{
		solve();
	}
}