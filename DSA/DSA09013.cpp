#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
const int MOD = 1e9+7;

int n, m, s, t;
bool visited[maxn];
vector<int> ke[1005];
void DFS(int u){
    visited[u]=true;
    for(int v : ke[u]){
        if((u==s && v==t) || (u==t && v==s))    continue;
        if(!visited[v]) DFS(v);
    }
}
int tplt(){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            cnt++;
            DFS(i);
        }
    }
    return cnt;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> m;
        s=0, t=0;
        memset(visited, false, sizeof visited);
        for(int i=1; i<=n; i++) ke[i].clear();
        vector<ii> edge;
        for(int i=1; i<=m; i++){
            int u, v;
            cin >> u >> v;
            ke[u].pb(v);
            ke[v].pb(u);
            edge.pb({u, v});
        }
        sort(edge.begin(), edge.end());
        int cc=tplt();
        for(ii x : edge){
            s=x.first, t=x.second;
            memset(visited, false, sizeof visited);
            if(tplt()>cc)  cout << s << " " << t << " ";
        }
        cout << "\n";
    }
}