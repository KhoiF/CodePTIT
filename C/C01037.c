#include<stdio.h>
int main()
{
	int a,b;
	scanf ("%d %d", &a, &b);
	long long S;
	if (b>a) S=(b-a+1)*(a+b)/2;
	else S=(a-b+1)*(a+b)/2;
    printf ("%lld", S); 
}