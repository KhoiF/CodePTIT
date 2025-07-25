#include<stdio.h>
#include<math.h>
int snt(int n)
{
	int sqr=sqrt(n);
	for(int i=2; i<=sqr; i++)
		if(n%i==0) return 0;
	return 1;
}
void solve()
{
	int n;
	scanf ("%d", &n);
	if(snt(n)==1) printf ("YES\n");
	else printf ("NO\n");
}
int main()
{
	int T;
	scanf ("%d", &T);
	while(T--)
	{
		solve();
	}
}