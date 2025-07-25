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
        long long b[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        b[0]=1ll*a[0]*a[1];
        b[n-1]=1ll*a[n-2]*a[n-1];
        for(int i=1; i<=n-2; i++)   b[i]=1ll*a[i-1]*a[i+1];
        for(int i=0; i<n; i++)  cout << b[i] << ' ';
        cout << endl;
    }
}