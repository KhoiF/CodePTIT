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
int n, s, a[105][105];
bool visited[105];
vector<ii> ke[105];
vector<iii> res;
void Prim(){
    priority_queue<iii, vector<iii>, greater<iii>> q;
    int d=0;
    for(ii x : ke[s]){
        q.push({x.first, {s, x.second}});
    }
    visited[s]=1;
    while(q.size()){
        iii x=q.top();
        int w=x.first, u=x.second.second, pa=x.second.first;
        q.pop();
        if(!visited[u]){
            d+=w;
            visited[u]=1;
            res.pb({w, {pa, u}});
            for(ii tmp : ke[u]){
                q.push({tmp.first, {u, tmp.second}});
            }
        }
    }
    if(res.size()!=n-1) cout << 0;
    else{
        cout << d << "\n";
        for(iii x : res){
            cout << min(x.second.first, x.second.second) << " " << max(x.second.first, x.second.second) << " " << x.first << "\n";
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    cin >> n >> s;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]>0 && a[i][j]<=50)    ke[i].pb({a[i][j], j});
        }
    }
    Prim();
}