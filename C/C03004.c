#include<stdio.h>
int ucln(int a,int b)
{
	int tmg;
	while(b!=0)
	{
		tmg=a%b;
		a=b;
		b=tmg;
	}
	return a;
}
int main()
{
	int a,b;
	scanf ("%d %d", &a, &b);
	int uc=ucln(a,b);
	long long bc=(1ll*a*1ll*b)/uc;
	printf ("%d\n%lld",uc,bc);
}