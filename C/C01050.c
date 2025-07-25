#include<stdio.h>
int main()
{
	int r,c;
	scanf ("%d %d", &r, &c);
	for (int i=1; i<=c; i++)
	{
		for (int j=1; j<=r; j++)
		{
			if (i==1 || i==c) printf("*");
			else 
			{
				if (j==1 || j==r) printf ("*");
				else printf (" ");
			}
		}
		printf ("\n");
	}
}