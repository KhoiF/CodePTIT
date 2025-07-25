#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int x=a;
	for(int i=a; i>0; i--)
	{
		for(int j=0; j<i; j++)
		{
			printf ("%c", '@'-1+x+j);
		}
		x--;
		printf("\n");
	}
}