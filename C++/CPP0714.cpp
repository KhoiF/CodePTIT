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
        int a[n+1];
        for(int i=1; i<=n; i++) cin >> a[i];
        int i=n-1; 
        while(a[i]<a[i+1] && i>0)   i--;
        if(i==0)
        {
            for(int i=1; i<=n; i++) cout << i << ' ';
            cout << "\n";
            continue;
        } 
        int j=n;
        while(a[j]>a[i])    j--;
        swap(a[i],a[j]);
        int l=i+1,r=n;
        while(l<r)
        {
            swap(a[l],a[r]);
            l++;r--;
        }
        for(int i=1; i<=n; i++) cout << a[i] << ' ';
        cout << endl;
    }
    
}   