#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<int, pair<int, int>>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n, s, t, a[105][105], pa[105];
vector<iii> dscanh;
void BellmanFord(){
    vector<int> d(n+1, 1e9);
    d[s]=0;
    for(int i=1; i<=n-1; i++){
        for(iii x : dscanh){
            int w=x.first, u=x.second.first, v=x.second.second;
            if(d[u]!=1e9 && d[v]>d[u]+w){
                d[v]=d[u]+w;
                pa[v]=u;
            }
        }
    }
    for(iii x : dscanh){
            int w=x.first, u=x.second.first, v=x.second.second;
            if(d[u]!=1e9 && d[v]>d[u]+w){
                cout << -1;
                return;
            }
    }
    if(d[t]==1e9)   cout << 0;
    else{
        cout << d[t] << "\n";
        vector<int> ans;
        for(int i=t; i!=0; i=pa[i]) ans.pb(i);
        for(int i=ans.size()-1; i>=0; i--)  cout << ans[i] << " ";
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("BN.INP", "r", stdin);
    freopen("BN.OUT", "w", stdout);
    cin >> n >> s >> t;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]!=0 && a[i][j]<=50)    dscanh.pb({a[i][j], {i, j}});
        }
    }
    BellmanFord();
}