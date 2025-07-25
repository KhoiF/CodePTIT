#include<bits/stdc++.h>

using namespace std;
int t, n, d[1000005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    int tmp, ans;
    while(t--){
        cin >> n;
        ans=0;
        memset(d, 0 ,sizeof d);
        for(int i = 0; i < n; i++){
            cin >> tmp;
            d[tmp]++;
            if(d[tmp] > n/2)  ans = tmp;
        }
        if(ans) cout << ans << "\n";
        else cout << "NO\n";
    }
}