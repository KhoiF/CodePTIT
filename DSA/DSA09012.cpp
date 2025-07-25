#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
const int MOD = 1e9+7;
int n, m;
bool visited[1005];
vector<int> ke[1005];
void nhap(){
    cin >> n >> m;
    for(int i=1; i<=n; i++) ke[i].clear();
    memset(visited, false, sizeof visited);
    for(int i=1; i<=m; i++){
        int u, v;
        cin >> u >> v;
        ke[u].pb(v);
        ke[v].pb(u);
    }
}
void DFS(int u){
    visited[u]=true;
    for(int v : ke[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}
int tplt(){
    int scc=0;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            scc++;
            DFS(i);
        }
    }
    return scc;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        nhap();
        int tp=tplt();
        for(int i=1; i<=n; i++){
            memset(visited, false, sizeof visited);
            visited[i]=true;
            int tmp=tplt();
            if(tmp>tp)  cout << i << " ";
        }
        cout << "\n";
    }
}