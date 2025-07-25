#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        int a[n];
        for(int &i : a) cin >> i;
        auto it1=lower_bound(a, a+n, x);
        auto it2=upper_bound(a, a+n, x);
        int ans=it2-it1;
        if(!ans)    cout << -1 << "\n";
        else cout << ans << "\n";
    }
}