#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
struct canh{
    int x, y, w;
};
int n, m, parent[105], sz[105];
vector<canh> dscanh;
void ktao(){
    for(int i=1; i<=n; i++){
        parent[i]=i;
        sz[i]=1;
    }
}
int Find(int u){
    if(u==parent[u])    return u;
    return parent[u]=Find(parent[u]);
}
bool Union(int u, int v){
    u = Find(u);
    v = Find(v);
    if(u==v)    return false;
    if(sz[u] > sz[v]){
        parent[v]=u;
        sz[u]+=sz[v];
    }
    else{
        parent[u]=v;
        sz[v]+=sz[u];
    }
    return true;
}
void Kruskal(){
    long long d=0;
    vector<canh> tree;
    for(int i=0; i<m; i++){
        if(tree.size()==n-1)    break;
        if(Union(dscanh[i].x, dscanh[i].y)){
            d+=1ll*dscanh[i].w;
            tree.pb({dscanh[i].x, dscanh[i].y, dscanh[i].w});
        }
    }
    if(tree.size()==n-1)    cout << d << "\n";
}
bool cmp(canh a, canh b){
    return a.w < b.w;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> m;
        dscanh.clear();
        for(int i=0; i<m; i++){
            int x, y, w;
            cin >> x >> y >> w;
            dscanh.pb({x, y, w});
        }
        sort(dscanh.begin(), dscanh.end(), cmp);
        ktao();
        Kruskal();
    }
}