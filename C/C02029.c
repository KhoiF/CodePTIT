#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		char s='A'+i-1;
		for(int j=1; j<=i; j++)
		{
			printf("%c ", s);
			s+=n-j;
		}
		printf("\n");
	}
}