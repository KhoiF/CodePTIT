#include<stdio.h>
#include<math.h>
int check(int n)
{
	while (n!=0)
	{
		int truoc,sau;
		sau=n%10;
		truoc=(n%100)/10;
		if (sau<truoc)
		{
			return 0;
			break;
		}
		else n/=10;
	}
	return 1;
}
void solve()
{
	int n;
	scanf ("%d", &n);
	int a=1;
	for (int i=1; i<n; i++) a*=10;
	int b=a*10;
	for (int i=a+1; i<b; i++)
	{
		if (check(i)==1) printf ("%d ", i);
	}
	
}
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
	{
		solve();
		printf ("\n");
	}
	
}

