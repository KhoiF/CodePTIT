#include<stdio.h>
#include<math.h>
void scp (int a)
{
	int sqr;
	sqr=sqrt(a);
	if (sqr*sqr==a) printf("YES");
	else printf("NO");
}
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
	{
		int n;
		scanf ("%d",&n);
		scp(n);
		printf("\n");
	}
}