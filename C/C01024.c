#include<stdio.h>
int main()
{
	int T;
	scanf ("%d", &T);
	while (T--)
    {
    	int n;
    	scanf ("%d", &n);
    	int bd,kt=n%10;
    	while (n!=0)
    	{
    		if (n/10==0) bd=n;
			n/=10;
		}
		if (bd==kt) printf ("YES\n");
		else printf ("NO\n");
	}
}