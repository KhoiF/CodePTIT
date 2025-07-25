#include<stdio.h>
#include<math.h>
int main()
{
	int n,S=0;
	scanf ("%d", &n);
	int n1=n;
	while (n1!=0)
	{
		int S1=1;
		for (int i=1;i<=n1%10;i++)
		{
			S1=S1*i;
		}
		S=S+S1;
		n1/=10;
	}
	if(n==S) printf("1");
	else printf ("0");
}