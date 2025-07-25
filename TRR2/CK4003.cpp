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
int t, n, m, s, a[105][105];
bool visited[105];
vector<int> ke[1005];
vector<ii> res;
void DFS(int u){
    visited[u]=true;
    for(int v : ke[u]){
        if(!visited[v]){
            res.pb({u, v});
            DFS(v);
        }
    }
}
void BFS(int s){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.size()){
        int u = q.front();
        q.pop();
        for(int v : ke[u]){
            if(!visited[v]){
                res.pb({u, v});
                q.push(v);
                visited[v]=true;
            }
        }
    }
    if(res.size()!=n-1) cout << 0;
    else{
        cout << n-1 << "\n";
        for(ii x  : res)    cout << x.first << " " << x.second << "\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> t >> n >> s;
        for(int i=1; i<=n; i++){
            int cnt;
            cin >> cnt;
            for(int j=1; j<=cnt; j++){
                int x;
                cin >> x;
                ke[i].pb(x);
            }
        }
        if(t==1){
            DFS(s);
            if(res.size()!=n-1) cout << 0;
            else{
                cout << n-1 << "\n";
                for(ii x  : res)    cout << x.first << " " << x.second << "\n";
            }
        }
        else{
            BFS(s);
        }
    }
}