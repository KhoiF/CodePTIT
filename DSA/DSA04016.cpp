#include<bits/stdc++.h>

using namespace std;
int t, n, m, k, a[2000005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=n; i<n+m; i++)    cin >> a[i];
        sort(a, a+n+m);
        cout << a[k-1] << "\n";
    }
}