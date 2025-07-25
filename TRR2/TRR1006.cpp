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
int n, m, d[105], a[105][150];
vector<int> ke[105];
vector<ii> E;
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
        E.pb({x, y});
        d[x]++;
        d[y]++;
        
    }
    if(test==1){
        for(int i=1; i<=n; i++) cout << d[i] << " ";
    }
    else{
        cout << n << " " << m << "\n";
        sort(E.begin(), E.end());
        int cnt=0;
        for(auto e : E){
            cnt++;
            a[e.first][cnt]=1;
            a[e.second][cnt]=1;
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++)   cout << a[i][j] << " ";
            cout << "\n";
        }
    }
}