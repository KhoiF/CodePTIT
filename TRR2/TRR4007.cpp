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
int n, m, pa[105];
void init(){
    for(int i=1; i<=n; i++) pa[i]=i;
}
int Find(int u){
    return u==pa[u] ? u : pa[u]=Find(pa[u]);
}
bool Union(int u, int v){
    u=Find(u);
    v=Find(v);
    if(u==v)    return false;
    return pa[v]=u, true;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    cin >> n >> m;
    vector<iii> dscanh;
    init();
    for(int i=1; i<=m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        dscanh.pb({w, {x, y}});
    }
    sort(dscanh.begin(), dscanh.end());
    int d=0;
    vector<iii> res;
    for(int i=0; i<m; i++){
        int x=dscanh[i].second.first, y=dscanh[i].second.second, w=dscanh[i].first;
        if(Union(x, y)){
            d+=w;
            res.pb(dscanh[i]);
        }
    }
    if(res.size()==n-1){
        cout << d << "\n";
        for(iii x : res){
            cout << min(x.second.first, x.second.second) << " " << max(x.second.first, x.second.second) << " " << x.first << "\n";
        }
    }
    else cout << 0;
}