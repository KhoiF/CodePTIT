#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
    printf("%d\n%d\n%lld\n%d\n%d\n%.2f",a+b,a-b,(long long)a*(long long)b,a/b,a%b,(1.0*a)/(1.0*b)); 
 } 
