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
int n, a[105][105];
bool visited[105];
void DFS1(int u){
    visited[u]=1;
    for(int i=1; i<=n; i++){
        if(a[u][i] && !visited[i])  DFS1(i);
    }
}
void DFS2(int u){
    visited[u]=true;
    for(int i=1; i<=n; i++){
        if(!visited[i] && (a[u][i] || a[i][u])) DFS2(i);
    }
}
bool flag=true;
void solve(){
    for(int i=1; i<=n; i++){
        DFS1(i);
        for(int j=1; j<=n; j++){
            if(!visited[j]){
                flag=false;
            }
        }
        memset(visited, false, sizeof visited);
        if(!flag)   break;
    }
    if(flag){
        cout << 1;
        return;
    }
    else{
        DFS2(1);
        for(int j=1; j<=n; j++){
            if(!visited[j]){
                cout << 0;
                return;
            }
        }
        cout << 2;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    solve();
}
