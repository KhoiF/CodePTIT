#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, a[100005];
    cin >> t;
    while(t--){
        cin >> n;
        int dp1[n+1]={0}, dp2[n+1]={0};
        for(int i=1; i<=n; i++) cin >> a[i];
        dp1[1]=dp2[n]=1;
        for(int i=2; i<=n; i++){
            if(a[i]>a[i-1]) dp1[i]=dp1[i-1]+1;
            else dp1[i]=1;
        }
        for(int i=n-1; i>=1; i--){
            if(a[i]>a[i+1])    dp2[i]=dp2[i+1]+1;
            else dp2[i]=1;
        }
        int ans=1;
        for(int i=1; i<=n; i++) ans=max(ans, dp1[i]+dp2[i]-1);
        cout << ans << "\n";
    }
}