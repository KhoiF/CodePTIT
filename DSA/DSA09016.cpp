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
int n, m, color[1005];
vector<int> ke[1005];
bool DFS(int u){
    color[u]=1;
    for(int v : ke[u]){
        if(color[v]==0){
            if(DFS(v))  return true;
        }
        else if(color[v]==1)   return true;
    }
    color[u]=2;
    return false;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(color, 0, sizeof color);
        for(int i=1; i<=1005; i++)  ke[i].clear();
        cin >> n >> m;
        for(int i=1; i<=m; i++){
            int x, y;
            cin >> x >> y;
            ke[x].pb(y);
        }
        bool ok;
        for(int i=1; i<=n; i++){
            if(!color[i]){
                ok=DFS(i);
            }
            if(ok)  break;
        }
        if(ok)  cout << "YES\n";
        else cout << "NO\n";
    }
}