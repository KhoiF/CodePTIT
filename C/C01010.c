#include<stdio.h>
int main()
{
	int n,y,w,d;
	scanf("%d",&n); 
	y=n/365;
	w=(n-(y*365))/7;
	d=n-y*365-w*7;
	printf("%d %d %d",y,w,d); 
 } 
