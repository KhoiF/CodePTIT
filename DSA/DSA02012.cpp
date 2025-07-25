#include<bits/stdc++.h>

using namespace std;
int t, n, m, a[105][105];
int c(int n, int k){
    if(k==0 || k==n)    return 1;
    return c(n-1, k-1) + c(n-1, k);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++) cin >> a[i][j];
        }
        cout << c(n+m-2, n-1) << "\n";
    }
}