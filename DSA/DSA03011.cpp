#include<bits/stdc++.h>

using namespace std;
const int MOD=1e9+7;
int t, n, a[2000005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        priority_queue<long long, vector<long long>, greater<long long>> q;
        for(int i=0; i<n; i++){
            cin >> a[i];
            q.push(a[i]);
        }
        long long ans=0;
        while(q.size()>1){
            long long x=q.top();
            q.pop();
            long long y=q.top();
            q.pop();
            ans=(ans+(x+y)%MOD)%MOD;
            q.push((x+y)%MOD);
        }
        cout << ans << "\n";
    }
}