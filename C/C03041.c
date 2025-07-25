#include<stdio.h>
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
	{
	    int a,b,c,d;
    	scanf ("%d %d %d %d", &a, &b, &c, &d);
	    if (d-b==c-a) printf ("YES");
    	else printf ("NO");
    	printf ("\n");
    }
}