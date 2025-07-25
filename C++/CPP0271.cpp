#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, m, l, t;
    cin >> t;
    while(t--){
        cin >> n >> m >> l;
        int a[n+1][m+1];
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> a[i][j];
            }
        }
        long long c[n+1][m+1];
        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++) c[i][j]=0;
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++) c[i][j]=1ll*c[i-1][j]+1ll*c[i][j-1]-1ll*c[i-1][j-1]+1ll*a[i][j];
        }
        for(int i=l; i<=n; i++){
            for(int j=l; j<=m; j++){
                cout << (c[i][j]-c[i-l][j]-c[i][j-l]+c[i-l][j-l])/(l*l) << ' ';
            }
            cout << "\n";
        }
    }
}