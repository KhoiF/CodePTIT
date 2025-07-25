#include<bits/stdc++.h>

using namespace std;
int t, n, m, q, parent[10005], sz[10005];
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
void Union(int u, int v){
    u = Find(u);
    v = Find(v);
    if(u==v)    return;
    if(sz[u] > sz[v]){
        parent[v]=u;
        sz[u]+=sz[v];
    }
    else{
        parent[u]=v;
        sz[v]+=sz[u];
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> m;
        ktao();
        int x, y;
        for(int i=0; i<m; i++){
            cin >> x >> y;
            Union(x, y);
        }
        cin >> q;
        while(q--){
            cin >> x >> y;
            if(Find(x)==Find(y))    cout << "YES\n";
            else cout << "NO\n";
        }
    }
}