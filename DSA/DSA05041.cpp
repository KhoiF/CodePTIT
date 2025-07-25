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
int n, dp[105][105];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(dp, 0, sizeof dp);
        string s;
        cin >> s;
        int n=s.size();
        s=" "+s;
        for(int i=2; i<=n; i++){
            if(s[i]==s[i-1])    dp[i-1][i]=0;
            else dp[i-1][i]=1;
            for(int j=i-2; j>=1; j--){
                if(s[j]==s[i])  dp[j][i]=dp[j+1][i-1];
                else dp[j][i]=min(dp[j+1][i], dp[j][i-1])+1;
            }
        }
        cout << dp[1][n] << "\n";
    }
}