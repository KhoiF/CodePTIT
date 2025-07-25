#include<stdio.h>
#include<math.h>
int snt(int a)
{
	int check=1;
	for (int i=2; i<=sqrt(a); i++)
	{
		if (a%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
	{
		int n;
		scanf ("%d", &n);
		for (int i=2; i<=n/2; i++)
		{
			if (snt(i)==1 && snt(n-i)==1)
			printf ("%d %d ", i, n-i);
		}
		printf ("\n");
	}
	
}
