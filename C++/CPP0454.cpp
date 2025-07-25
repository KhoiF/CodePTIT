#include<bits/stdc++.h>

using namespace std;
bool BinSearch(long long a[], int n, long long x)
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
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            a[i]=(a[i]*a[i]);
        }
        int check=0;
        sort(a,a+n);
        for(int i=1; i<n; i++){
            int ok=0;
            for(int j=0; j<i; j++)
            {
                if(BinSearch(a,n,a[i]+a[j]))
                {
                    check=1;
                    ok=1;
                    break;
                }
            }
            if(ok)  break;
        }
        if(check)   cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}