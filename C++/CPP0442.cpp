#include<bits/stdc++.h>

using namespace std;
int a[1000001];
int Binsearch(int b[], int n, int x)
{
    int l=0,r=n-1;
    int mid=(l+r)/2;
    while(l<=r)
    {
        if(b[mid]==x)   return 1;
        else if(b[mid]>x)
        {
            r=mid-1;
            mid=(l+r)/2;
        }
        else
        {
            l=mid+1;
            mid=(l+r)/2;
        }
    } 
    return 0;
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
        if(Binsearch(a,n,x)==1)    cout << 1 << endl;
        else cout << "-1\n";

    }
}