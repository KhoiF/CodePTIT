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
int a[1005][1005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(a, 0, sizeof a);
        string s;
        cin >> s;
        int n = s.size();
        s= " "+s;
        for(int i=1; i<=n; i++){
            a[i][i]=1;
            a[i-1][i]=(s[i]==s[i-1]);
            for(int j=1; j<i-1; j++){
                if(s[j]==s[i])  a[j][i]=a[j+1][i-1];
                else a[j][i]=0;
            }
        }
        int ans=1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<i; j++){
                if(a[j][i]){
                    ans=max(ans, i-j+1);
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
}