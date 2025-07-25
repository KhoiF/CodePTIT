#include<stdio.h>
int main()
{
	int n;
	scanf ("%d", &n);
	int chan=0,dem=0;
	while(n!=0)
	{
		if((n%10)%2==0) chan++;
		dem++;
		n/=10;
	}
	printf ("%d %d", dem-chan, chan);
}