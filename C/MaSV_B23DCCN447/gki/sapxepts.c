#include<stdio.h>
typedef struct ThiSinh
{
	int ma;
	char ten[100];
	char ns[100];
	float td;
}TS;
float maxn(float a, float b)
{
	return (a>b) ? a:b;
}
void swap(TS *a,TS *b)
{
	TS tmp=*a;
	*a=*b;
	*b=tmp;
}
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	TS t[n];
	int x=1;
	for(int i=0; i<n; i++)
	{
		float m1,m2,m3;
		t[i].ma=x;
		x++;
		gets(t[i].ten);
		gets(t[i].ns);
		scanf("%f %f %f",&m1 , &m2, &m3);
		getchar();
		t[i].td=m1+m2+m3;
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(t[j].td<t[j+1].td)
				swap(&t[j],&t[j+1]);
		}
	}
	for(int i=0; i<n; i++)
	{
		printf("%d %s %s %.1f\n", t[i].ma, t[i].ten, t[i].ns, t[i].td);
	}
}