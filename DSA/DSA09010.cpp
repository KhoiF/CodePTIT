#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
const int MOD = 1e9+7;
int n, m;
bool visited[maxn];
vector<int> adj[maxn], t_adj[maxn];
stack<int> st;
void DFS1(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]) DFS1(v);
    }
    st.push(u);
}
void DFS2(int u){
    visited[u] = true;
    for(int v : t_adj[u]){
        if(!visited[v]) DFS2(v);
    }
}
void Kosaraju(){
    for(int i = 1; i <= n; i++){
        if(!visited[i]) DFS1(i);
    }
    memset(visited, false, sizeof(visited));
    int scc = 0;
    while(!st.empty()){
        int u = st.top(); st.pop();
        if(!visited[u]){
            ++scc;
            DFS2(u); cout << endl;
        }
    }
    if(scc==1)  cout << "YES\n";
    else cout << "NO\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> m;
        memset(visited, false, sizeof visited);
        for(int i=1; i<=n; i++){
            adj[i].clear();
            t_adj[i].clear();
        }
        for(int i=1; i<=m; i++){
            int u, v;
            cin >> u >> v;
            adj[u].pb(v);
            t_adj[v].pb(u);
        }
        Kosaraju();
    }   
}