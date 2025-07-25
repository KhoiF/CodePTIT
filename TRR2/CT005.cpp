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
int n, m, s, x[1005], cnt;
bool visited[1005];
vector<int> ke[1005], res[10005];
void Hamilton(int m){
    for(int v : ke[x[m-1]]){
        if(m==n+1 && v==s){
            cnt++;
            for(int i=1; i<=n; i++) res[cnt].pb(x[i]);
            res[cnt].pb(v);
            return;
        }
        else if(!visited[v]){
            x[m]=v;
            visited[v]=1;
            Hamilton(m+1);
            visited[v]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> m >> s;
    for(int i=1; i<=m; i++){
        int x, y;
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    x[1]=s;
    visited[s]=1;
    Hamilton(2);
    cout << cnt << "\n";
    for(int i=1; i<=cnt; i++){
        for(int v : res[i])   cout << v << " ";
        cout << "\n";
    }
}
