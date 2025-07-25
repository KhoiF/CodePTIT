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
int n, ans;
vector<int> ke[100005];
void DFS(int u, int h){
    for(int v : ke[u]){
        ans=max(ans, h+1);
        DFS(v, h+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n;
        ans=0;
        for(int i=1; i<=n; i++) ke[i].clear();
        for(int i=1; i<=n-1; i++){
            int x, y;
            cin >> x >> y;
            ke[x].pb(y);
        }
        DFS(1, 0);
        cout << ans << "\n";
    }
}