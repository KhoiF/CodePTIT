#include<stdio.h>
#include<string.h>
int main()
{
	char c[255];
	gets(c);
	int chu=0,so=0,khac=0;
	int l=strlen(c);
	for(int i=0; i<l; i++)
	{
		if((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z'))
			chu++;
		else if(c[i]>='0'&&c[i]<='9')
			so++;
		else khac++;
	}
	printf("%d %d %d",chu,so,khac);
}