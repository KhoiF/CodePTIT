#include<stdio.h>
#include<string.h>
int main()
{
	char c[100001];
	gets(c);
	int l=strlen(c)-1;
	printf("%d",l);
}