#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		int s=i;
		for(int j=1; j<=i; j++)
		{
			printf("%d ", s);
			s+=n-j;
		}
		printf("\n");
	}
}