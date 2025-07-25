#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n, dp[1005][1005];
string s;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> s;
        n=s.size();
        s=" "+s;
        dp[1][1]=1;
        int ans=0;
        for(int i=2; i<=n; i++){
            dp[i][i]=1;
            if(s[i-1]==s[i])    dp[i-1][i]=1;
            else dp[i-1][i]=0;
            for(int j=i-2; j>=1; j--){
                if(s[j]==s[i])  dp[j][i]=dp[j+1][i-1];
                else dp[j][i]=0;
                if(dp[j][i])    ans=max(ans, i-j+1);
            }
        }
        cout << ans << "\n";
    }
}