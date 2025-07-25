#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a; i++)
	{
		for(int j=i; j<=a; j++)
			printf ("%c", 'A'-2+2*j);
		printf ("\n");
	}
}