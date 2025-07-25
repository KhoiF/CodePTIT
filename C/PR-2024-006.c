#include<stdio.h>
#include<string.h>
void swap(int *a, int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void Nhapmang(int a[],int n)
{
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
}
void Xuatmang(int a[],int n)
{
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
}
void Sapxep(int a[], int n)
{
	int check=1;
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1]) swap(&a[j],&a[j+1]);
			int check=0;
		}
		if(check==0) break;
	}
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int m,n;
		char x;
		scanf("%d %d %c", &m, &n, &x);
		int a[m],b[n],c[m+n];
		Nhapmang(a,m);
		Nhapmang(b,n);
		if(x=='F')
		{
			for(int i=0; i<m; i++)
				c[i]=a[i];
			for(int j=0; j<n; j++)
				c[m+j]=b[j];
			Xuatmang(c,m+n);
		}
		else if(x=='A')
		{
			for(int i=0; i<n; i++)
				c[i]=b[i];
			for(int j=0; j<m; j++)
				c[n+j]=a[j];
			Xuatmang(c,m+n);
		}
		else
		{
			for(int i=0; i<m; i++)
				c[i]=a[i];
			for(int j=0; j<n; j++)
				c[m+j]=b[j];
			Sapxep(c,m+n);
			if(x=='T') Xuatmang(c,m+n);
			else if(x=='G')
				for(int i=m+n-1; i>=0; i--)
					printf("%d ",c[i]);
		}
		printf("\n");
	}
}