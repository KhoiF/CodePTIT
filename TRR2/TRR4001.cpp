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
int t, n, s, a[105][105];
bool visited[105];
vector<int> ke[105];
vector<ii> res;
void DFS(int u){
    visited[u]=1;
    for(int v : ke[u]){
        if(!visited[v]){
            res.pb({u, v});
            DFS(v);
        }
    }
}
void BFS(){
    queue<int> q;
    q.push(s);
    visited[s]=1;
    while(q.size()){
        int u = q.front();
        q.pop();
        for(int v : ke[u]){
            if(!visited[v]){
                visited[v]=1;
                res.pb({u, v});
                q.push(v);
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    cin >> t >> n >> s;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]) ke[i].pb(j);
        }
    }
    if(t==1) DFS(s);
    else BFS();
    if(res.size()!=n-1) cout << 0;
    else{
        cout << res.size() << "\n";
        for(ii x : res){
            cout << min(x.first, x.second) << " " << max(x.first, x.second) << "\n";
        }
    }
}