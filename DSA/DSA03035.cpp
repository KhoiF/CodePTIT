#include<bits/stdc++.h>

using namespace std;
int n, x, dp[1000005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    int res=0;
    for(int i=1; i<=n; i++){
        cin >> x;
        dp[x]=dp[x-1]+1;
        res=max(res, dp[x]);
    }
    cout << n-res;
}