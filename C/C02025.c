#include<stdio.h>
int main()
{
	int h,c;
	scanf ("%d %d", &h, &c);
	for(int i=1; i<=h; i++)
	{
		if (i<=c)
		{
			for(int j=i; j<=c; j++)
				printf ("%c", '@'-1+j);
			for(int k=i-1; k>0; k--)
				printf ("%c", '@'-1+c);
			printf ("\n");
		}
		else
		{
			for(int j=1; j<=c; j++)
				printf("%c", '@'-1+c);
			printf ("\n");
		}
	}
}