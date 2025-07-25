#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, a[100005];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+1+n);
        int ans=1e9;
        for(int i=2; i<=n; i++) ans=min(ans, a[i]-a[i-1]);
        cout << ans << "\n";
    }
}   