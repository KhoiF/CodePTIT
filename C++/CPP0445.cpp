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
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n);
        if(a[0]!=a[1])  cout << a[0] << ' ' << a[1];
        else cout << -1;
        cout << endl;
    }
}