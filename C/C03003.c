#include<stdio.h>
#include<math.h>
int snt(int a)
{
	for (int i=2; i<=sqrt(a); i++)
	{
		if (a%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf ("%d", &n);
	for (int i=2;;i++)
	{
		if (snt(i)==1) 
		{
		    printf ("%d\n",i);
	        n--;
	    }
	    if (n==0) break;
	}
}