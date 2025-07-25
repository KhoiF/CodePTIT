#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        int ans=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                ans=max(ans,a[j]-a[i]);
            }
        }
        if(!ans)    cout << -1;
        else cout << ans;
        cout << "\n";
    }
}