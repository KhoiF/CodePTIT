#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, k, a[100005];
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+n+1);
        long long res=0;
        for(int i=1; i<=n-1; i++){
            auto it=lower_bound(a+i+1, a+n+1, a[i]+k);
            res+=(it-(a+i+1));
        }
        cout << res << "\n";
    }
}