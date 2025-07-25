#include<stdio.h>
int main()
{
	int a,b;
	scanf ("%d %d", &a, &b);
	for (int i=1; i<=a; i++)
	{
		if (i<=b)
		{
			for(int k=i; k<=b; k++)
				printf ("%c", 'A'-1+k);
			for(int j=i-1; j>0; j--)
				printf ("%c", 'A'-1+j);
		}
		else
		{
			for (int x=b; x>0; x--)
				printf ("%c",'A'-1+x);
		}
		printf ("\n");
	}
}