#include<stdio.h>
typedef struct Hang
{
	int ma;
	char ten[100];
	char nhom[100];
	float lai;	
}Hang;
void swap(Hang *a, Hang *b)
{
	Hang tmp=*a;
	*a=*b;
	*b=tmp;
}
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	Hang H[n];
	int x=1;
	for(int i=0; i<n; i++)
	{
		float mua,ban;
		H[i].ma=x;
		x++;
		gets(H[i].ten);
		gets(H[i].nhom);
		scanf("%f %f",&mua,&ban);
		getchar();
		H[i].lai=ban-mua;
	}
	for(int i=0; i<n-1; i++)
	{
		int check=0;
		for(int j=0; j<n-i-1; j++)
		{
			if(H[j].lai<H[j+1].lai)
			{
				swap(&H[j],&H[j+1]);
				check=1;
			}
		}
		if(check==0) break;
	}
	for(int i=0; i<n; i++)
	{
		printf("%d %s %s %.2f\n",H[i].ma,H[i].ten,H[i].nhom,H[i].lai);
	}
}