#include<stdio.h>
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
	{
	int n,s=0;
	scanf ("%d", &n);
	while(n!=0)
	{
		s=s+n%10;
		n/=10;
	}
	printf ("%d\n", s);
    }
}