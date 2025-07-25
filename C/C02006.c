#include<stdio.h>
int main()
{
	int h,c;
	scanf ("%d %d", &h, &c);
	for (int i=1; i<=h; i++)
	{
		for (int k=1; k<i; k++) printf ("~");
		for (int j=1; j<=c; j++) 
		{
			if (i==1 || i==h) printf ("*");
			else 
			{
				if (j==1 || j==c) printf ("*");
				else printf (".");
			}
		}
		printf ("\n");
	}
	
}