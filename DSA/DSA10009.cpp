#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
int n, m, q, x, y;
long long a[1005][1005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++) a[i][j]=INT_MAX;
            a[i][i]=0;
        }
        for(int i=1; i<=m; i++){
            int x, y, w;
            cin >> x >> y >> w;
            a[x][y]=a[y][x]=w;
        }
        for(int k=1; k<=n; k++){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    a[i][j]=min(a[i][j], a[i][k]+a[k][j]);
                }
            }
        }
        cin >> q;
        while(q--){
            cin >> x >> y;
            cout << a[x][y] << "\n";
        }
    }
}