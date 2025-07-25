#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n ,m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int a[n+5], b[m+5], d[1005]={0};
        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=m; i++){
            cin >> b[i];
            d[b[i]]++;
        }
        sort(b+1, b+1+m);
        int res=0;
        for(int i=1; i<=n; i++){
            if(a[i]==0) continue;
            else if(a[i]==1)    res+=d[0];
            else{
                auto it=upper_bound(b+1, b+m+1, a[i]);
                res+=(b+m+1-it);
                res+=d[0]+d[1];
                if(a[i]==2) res-=(d[3]+d[4]);
                if(a[i]==3) res+=d[2];
            }
        }
        cout << res << "\n";
    }
}