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
int n, a[105][105], cnt;
bool visited[105];
vector<int> ke[105], lt[105];
void DFS(int u){
    visited[u]=true;
    lt[cnt].pb(u);
    for(int v : ke[u]){
        if(!visited[v]) DFS(v);
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
            for(int j=1; j<=n; j++){
                cin >> a[i][j];
                if(a[i][j]){
                    ke[i].pb(j);
                    ke[j].pb(i);
                }
            }
        }
        for(int i=1; i<=n; i++){
            if(!visited[i]){
                cnt++;
                DFS(i);
            }
        }
        cout << cnt << "\n";
        for(int i=1; i<=cnt; i++){
            sort(lt[i].begin(), lt[i].end());
            for(int u : lt[i])  cout << u << " ";
            cout << "\n";  
        }
    }
}