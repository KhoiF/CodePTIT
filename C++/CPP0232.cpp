#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, m;
    cin >> t;
    while (t--){
        cin >> n >> m;
        int a[n][m], b[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)  cin >> a[i][j];
        }
        int ans=0;
        for(int j = 0; j < m; j++){
            b[0][j]=a[0][j];
            for(int i = 1; i < n; i++){
                if(a[i][j]) b[i][j]=b[i-1][j]+1;
                else b[i][j]=0;
            }
        }
        for(int i = 0; i < n; i++){
            sort(b[i], b[i] + m, greater<int>());
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ans = max(ans, b[i][j] * (j+1));
            }
        }
        cout << ans << "\n";
    }
}