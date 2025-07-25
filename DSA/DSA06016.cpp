#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, m, x;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int maxx=INT_MIN, minn=INT_MAX;
        for(int i=0; i<n; i++){
            cin >> x;
            maxx=max(maxx, x);
        }
        for(int i=0; i<m; i++){
            cin >> x;
            minn=min(minn, x);
        }
        long long res=1ll*maxx*minn;
        cout << res << "\n";
    }
}