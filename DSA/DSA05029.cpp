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
string s;
ll dp[45];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(dp, 0, sizeof dp);
        cin >> s;
        int n = s.size();
        s=" "+s;
        if(s[1]=='0'){
            cout << 0 << "\n";
            continue;
        }
        dp[0]=dp[1]=1;
        for(int i=2; i<=n; i++){
            if(s[i]>'0')    dp[i]=dp[i-1];
            if(s[i-1]=='1' || (s[i-1]=='2' && s[i]<'7'))    dp[i]+=dp[i-2];
        }
        cout << dp[n] << "\n";
    }
}
