#include<stdio.h>
int main()
{
	int T;
	scanf ("%d", &T);
	while(T--)
	{
	    int n,chan=0,le=0;
	    scanf ("%d", &n);
    	while(n!=0)
	    {
		    if (n%2==0) chan++;
		    else le++;
		    n/=10;
	    }
	    printf ("%d %d\n", le, chan);
    }
}