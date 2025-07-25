#include<stdio.h>
int tongcs(int n)
{
	int s=0;
	while (n!=0)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}
void solve()
{
	int a,b;
	scanf ("%d %d", &a, &b);
	if (tongcs(a)>tongcs(b)) printf ("%d %d", b, a);
	else if (tongcs(a)<=tongcs(b)) printf ("%d %d", a, b);
}
int main()
{
	solve();
}