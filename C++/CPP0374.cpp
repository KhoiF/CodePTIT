#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    int n=s.size();
    vector<int> dp(n), dpr(n);
    // dp[i] la so buoc de bien doi day toan a
    // dpr[i] la so buoc de bien doi day toan b
    if(s[0]=='B')   dp[0]=1;
    else dp[0]=0;
    if(s[0]=='A')   dpr[0]=1;
    else dpr[0]=0;
    for(int i=1; i<n; i++){
        if(s[i]=='A'){
            dp[i]=dp[i-1];
            dpr[i]=min(dpr[i-1]+1, dp[i-1]+1);
        }
        else{
            dp[i]=min(dp[i-1]+1, dpr[i-1]+1);
            dpr[i]=dpr[i-1];
        }
    }
    cout << min(dp[n-1], dpr[n-1]+1);
}