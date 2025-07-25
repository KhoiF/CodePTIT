#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)  cin >> a[i][j];
    }
    int k;
    cin >> k;
    long long ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]>k)   ans+=(1ll*a[i][j]);
        }
    }
    cout << ans;
}