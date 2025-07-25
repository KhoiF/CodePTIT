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
int n, m, x[50], ok;
bool visited[50];
vector<int> ke[50];
void Hamilton(int m){
    if(m>n){
        ok=1;
    }
    for(int v : ke[x[m-1]]){
        if(!visited[v]){
            x[m]=v;
            visited[v]=true;
            Hamilton(m+1);
            visited[v]=false;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        ok=0;
        cin >> n >> m;
        for(int i=1; i<=n; i++) ke[i].clear();
        for(int i=1; i<=m; i++){
            int x, y;
            cin >> x >> y;
            ke[x].pb(y);
            ke[y].pb(x);
        }
        for(int i=1; i<=n; i++){
            memset(visited, false, sizeof visited);
            x[1]=i;
            visited[i]=true;
            Hamilton(2);
            if(ok)  break;
        }
        if(ok)  cout << "1\n";
        else cout << "0\n";
    }
}