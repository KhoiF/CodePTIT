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
string s1, s2;
int dp[105][105];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(dp, 0, sizeof dp);
        cin >> s1 >> s2;
        int n=s1.size(), m=s2.size();
        s1=" "+s1;
        s2=" "+s2;
        for(int i=1; i<=m; i++) dp[0][i]=i;
        for(int i=1; i<=n; i++) dp[i][0]=i;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(s1[i]==s2[j])    dp[i][j]=dp[i-1][j-1];
                else dp[i][j]=min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]})+1;
            }
        }
        cout << dp[n][m] << "\n";
    }
}