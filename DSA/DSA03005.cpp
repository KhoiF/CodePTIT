#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, k, a[100];
    cin >> t;
    while(t--){
        cin >> n >> k;
        int ans=0;
        for(int i=1; i<=n; i++){
            cin >> a[i];
            ans+=a[i];
        }
        sort(a+1, a+1+n);
        if(k>n-k)   k=n-k;
        for(int i=1; i<=k; i++){
            ans-=2*a[i];
        }
        cout << abs(ans) << "\n";
    }
}