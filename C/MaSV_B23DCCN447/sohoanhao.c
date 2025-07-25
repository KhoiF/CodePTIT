#include<stdio.h>
#include<math.h>
int main()
{
	int n,S=1;
	scanf ("%d", &n);
	for (int i=2; i<=sqrt(n);i++)
	{
		if (n%i==0) S=S+i+n/i;
	}
	if (S==n) printf("1");
	else printf ("0");
}