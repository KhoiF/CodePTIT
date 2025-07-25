#include<bits/stdc++.h>

using namespace std;
int c, n, w[105], dp[25005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> c >> n;
    for(int i=1; i<=n; i++) cin >> w[i];
    dp[0]=1;
    int res=0;
    for(int i=1; i<=n; i++){
        for(int j=c; j>=w[i]; j--){
            if(dp[j-w[i]]){
                dp[j]=1;
                res=max(res, j);
            }
        }
    }
    cout << res;
}