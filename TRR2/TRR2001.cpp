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
int n, u, v, a[105][105], ok, pa[105];
vector<int> ke[105];
bool visited[105];
void DFS(int i){
    if(ok)  return;
    visited[i]=true;
    if(i==v){
        ok=1;
        return;
    }
    for(int j : ke[i]){
        if(!visited[j]){
            pa[j]=i;
            DFS(j);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    int test = 1;
    cin >> test;
    if(test==1){
        cin >> n >> u >> v;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++) cin >> a[i][j];
        }
        int d=0;
        for(int k=1; k<=n; k++){
            if(a[u][k] && a[k][v])  d++;
        }
        cout << d;
    }
    else{
        cin >> n >> u >> v;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin >> a[i][j];
                if(a[i][j]) ke[i].pb(j);
            }
        }
        DFS(u);
        if(!ok) cout << 0;
        else{
            vector<int> res;
            for(int i=v; i; i=pa[i])    res.pb(i);
            for(int i=res.size()-1; i>=0; i--)  cout << res[i] << " ";
        }
    }
}