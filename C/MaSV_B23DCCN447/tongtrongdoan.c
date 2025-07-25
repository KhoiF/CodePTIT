#include<stdio.h>
int main()
{
	int a,b;
	scanf ("%d %d", &a, &b);
	int min,max;
	if(a>=b)
	{
		max=a;
		min=b;
	}
	else
	{
		max=b;
		min=a;
	}
	int S;
	S=(min+max)*(max-min+1)/2;
	printf ("%d", S);
}