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
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        queue<ii> q;
        q.push({n, 0});
        map<int, int> mp;
        mp[n]=1;
        int ans;
        while(1){
            int u=q.front().first, cnt=q.front().second;
            q.pop();
            if(u==1){
                ans=cnt;
                break;
            }
            if(mp[u-1]!=1){
                q.push({u-1, cnt+1});
                mp[u-1]=1;
            }
            for(int i=sqrt(u); i>=2; i--){
                if(u%i==0 && mp[u/i]!=1){
                    q.push({u/i, cnt+1});
                    mp[u/i]=1;
                }
            }
        }       
        cout << ans << "\n";
    }
}