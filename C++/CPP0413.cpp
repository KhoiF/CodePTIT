#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a,a+n);
        int l=0,r=n-1;
        while(l<=r)
        {
            if(l==r)
            {
                cout << a[l];
                break;
            }
            cout << a[r] << ' ' << a[l] << ' ';
            r--;l++;
        } 
        cout << "\n";
    }
}