#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
const int MOD = 1e9+7;
int n, m, color[1005], ok;
vector<int> ke[1005];
void DFS(int u, int c){
    color[u]=c;
    for(int v : ke[u]){
        if(!color[v]){
            DFS(v, 3-c);
        }
        else if(color[v]==color[u]){
            ok=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> m;
        ok=1;
        memset(color, 0, sizeof color);
        for(int i=1; i<=n; i++) ke[i].clear();
        for(int i=1; i<=m; i++){
            int u, v;
            cin >> u >> v;
            ke[u].pb(v);
            ke[v].pb(u);
        }
        for(int i=1; i<=n; i++){
            if(!color[i]){
                DFS(i, 1);
            }
            if(ok==0)   break;
        }
        if(ok)  cout << "YES\n";
        else cout << "NO\n";
    }
}   
