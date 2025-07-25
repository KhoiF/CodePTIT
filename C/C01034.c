#include<stdio.h>
#include<math.h>
int main()
{
	int m,n;
	scanf ("%d %d", &m, &n);
	int sqr1=sqrt(m),sqr2=sqrt(n);
	if (sqr1*sqr1!=m) sqr1=sqr1+1;
	printf ("%d\n", sqr2-sqr1+1);
	for (int i=sqr1;i<=sqr2;i++)
	{
		printf ("%d\n", i*i);
	}
}