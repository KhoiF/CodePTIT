#include<stdio.h>
void solve()
{
	int n;
	scanf("%d", &n);
	int dem=0;
	if(n>=1000)
	{
		dem+=n/1000;
		n%=1000;
	}
	if(n>=500)
	{
		dem++;
		n-=500;
	}
	if(n>=200)
	{
		dem+=n/200;
		n%=200;
	}
	if(n>=100)
	{
		dem++;
		n-=100;
	}
	if(n>=50)
	{
		dem++;
		n-=50;
	}
	if(n>=20)
	{
		dem+=n/20;
		n%=20;
	}
	if(n>=10)
	{
		dem++;
		n-=10;
	}
	if(n>=5)
	{
		dem++;
		n-=5;
	}
	if(n>=2)
	{
		dem+=n/2;
		n%=2;
	}
	if(n==1)
	{
		dem++;
		n=0;
	}
	printf("%d\n",dem);
}
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		solve();
	}
}