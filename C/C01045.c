#include<stdio.h>
#include<math.h>
int main()
{
	int n,dau,cuoi;
	scanf ("%d", &n);
	cuoi=n%10;
	while (n!=0)
	{
		if (n/10==0) dau=n;
		n/=10;
	}
	printf ("%d %d", dau, cuoi);
}