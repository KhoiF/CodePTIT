#include<bits/stdc++.h>

using namespace std;
bool BinSearch(int a[], int n, int x)
{
    int l=0,r=n-1;
    int mid=(l+r)/2;
    while(l<=r)
    {
        if(a[mid]==x)   return true;
        else if(a[mid]<x)
        {
            l=mid+1;
            mid=(l+r)/2;
        }
        else
        {
            r=mid-1;
            mid=(l+r)/2;
        }
    }
    return false;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,x;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a,a+n);
        int check=-1;
        for(int i=0; i<n; i++)
        {
            if(BinSearch(a,n,x+a[i]))
            {
                check=1;
                break;
            }
        }
        cout << check << endl;
    }
}