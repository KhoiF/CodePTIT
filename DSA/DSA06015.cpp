#include<bits/stdc++.h>

using namespace std;
void Merge(int a[],int l, int m, int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i=0; i<n1; i++)
    {
        L[i]=a[l+i];
    }
    for(int i=0; i<n2; i++)
    {
        R[i]=a[m+1+i];
    }
    int i=0,j=0,h=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])  a[h++]=L[i++];
        else    a[h++]=R[j++];
    }
    while(i<n1) a[h++]=L[i++];
    while(j<n2) a[h++]=R[j++];
}
void Mergesort(int a[], int l, int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        Mergesort(a, l, m);
        Mergesort(a,m+1,r);
        Merge(a,l,m,r);
    }
}
int t, n, a[1000005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        Mergesort(a,0,n-1);
        for(int i=0; i<n; i++) cout << a[i] << " ";
        cout << "\n";
    }
}