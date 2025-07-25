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
int n, a[105][105], tplt;
bool visited[105];
vector<int> ke[105];
vector<ii> e;
void DFS(int u){
    visited[u]=true;
    for(int v : ke[u]){
        if(!visited[v]) DFS(v);
    }
}
void DFS2(int u, int x, int y){
    visited[u]=true;
    for(int v : ke[u]){
        if((u==x && v==y) || (u==y && v==x))    continue;
        if(!visited[v]) DFS2(v, x, y); 
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++) cin >> a[i][j];
        }
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                if(a[i][j]){
                    ke[i].pb(j);
                    ke[j].pb(i);
                    e.pb({i, j});
                }
            }
        }
        for(int i=1; i<=n; i++){
            if(!visited[i]){
                tplt++;
                DFS(i);
            }
        }
        vector<ii> res;
        for(ii i : e){
            memset(visited, false, sizeof visited);
            int x = i.first, y=i.second;
            int cnt=0;
            for(int j=1; j<=n; j++){
                if(!visited[j]){
                    cnt++;
                    DFS2(j, x, y);
                }
            }
            if(cnt>tplt)    res.pb({x, y});
        }
        cout << res.size() << "\n";
        sort(res.begin(), res.end());
        for(ii u : res)    cout << u.first << " " << u.second << "\n";
    }
}