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
int n, pa[11][1005], h[1005];
vector<int> ke[1005];
void DFS(int u){
    for(int v : ke[u]){
        if(v!=pa[0][u]){
            pa[0][v]=u;
            for(int i=1; i<=10; i++)    pa[i][v]=pa[i-1][pa[i-1][v]];
            h[v]=h[u]+1;
            DFS(v);
        }
    }
}
int lca(int u, int v){
    if(h[u]<h[v])   swap(u, v);
    int res=h[u]+h[v];
    int dis=h[u]-h[v];
    for(int i=0; i<=10; i++){
        if(bit(dis, i)) u=pa[i][u]; 
    }
    if(u==v)    return res-2*h[v];
    for(int i=10; i>=0; i--){
        if(pa[i][u]!=pa[i][v]){
            u=pa[i][u];
            v=pa[i][v];
        }
    }
    u=pa[0][u];
    res=res-2*h[u];
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(pa, 0, sizeof pa);
        memset(h, 0, sizeof h);
        cin >> n;
        for(int i=1; i<=n; i++) ke[i].clear();
        for(int i=1; i<n; i++){
            int x, y;
            cin >> x >> y;
            ke[x].pb(y);
            ke[y].pb(x);
        }
        DFS(1);
        int q;
        cin >> q;
        while(q--){
            int x, y;
            cin >> x >> y;
            cout << lca(x, y) << "\n";
        }
    }
}