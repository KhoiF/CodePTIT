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
int n, m, degin[105], degout[105];
vector<int> ke[105];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test = 1;
    cin >> test;
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int x, y;
        cin >> x >> y;
        degin[y]++;
        degout[x]++;
        ke[x].pb(y);
    }
    if(test==1){
        for(int i=1; i<=n; i++) cout << degin[i] << " " << degout[i] << "\n";
    }
    else{
        cout << n << "\n";
        for(int i=1; i<=n; i++){
            cout << ke[i].size() << " ";
            for(int v : ke[i]) cout << v << " ";
            cout << "\n";
        }
    }
}