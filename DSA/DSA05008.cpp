#include<bits/stdc++.h>

using namespace std;
int t, n, s, a[205], dp[40005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        memset(dp, 0, sizeof dp);
        cin >> n >> s;
        for(int i=1; i<=n; i++) cin >> a[i];
        dp[0]=1;
        int lastid=105;
        for(int i=1; i<=n; i++){
            for(int j=s; j>=a[i]; j--){
                if(dp[j])   continue;
                else if(dp[j-a[i]]) dp[j]=1;
            }
        }
        if(dp[s])   cout << "YES\n";
        else cout << "NO\n";
    }
}