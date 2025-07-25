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
int n, s, t, a[105][105], pa[105];
vector<ii> ke[105];
void Dijkstra(){
    vector<int> d(n+1, 1e9);
    d[s]=0;
    priority_queue<iii, vector<iii>, greater<iii>> q;
    q.push({0, {0, s}});
    while(q.size()){
        iii x=q.top();
        q.pop();
        int dis=x.first, u=x.second.second, parent=x.second.first;
        if(dis<=d[u]){
            d[u]=dis;
            pa[u]=parent;
            for(ii tmp : ke[u]){
                int w=tmp.first, v=tmp.second;
                if(d[v]>d[u]+w){
                    d[v]=d[u]+w;
                    q.push({d[v], {u, v}});
                }
            }
        }
    }
    if(d[t]==1e9)   cout << 0;
    else{
        cout << d[t] << "\n";
        vector<int> res;
        for(int i=t; i!=0; i=pa[i]) res.pb(i);
        for(int i=res.size()-1; i>=0; i--)  cout << res[i] << " ";

    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DN.INP", "r", stdin);
    freopen("DN.OUT", "w", stdout);
    cin >> n >> s >> t;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]>0 && a[i][j]<=50)    ke[i].pb({a[i][j], j});
        }
    }
    Dijkstra();
}