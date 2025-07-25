#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,m,n,a,b;
    cin >> t;
    while(t--){
        cin >> m >> n >> a >> b;
        if(m>n) swap(m,n);
        int ans=0;
        for(int i=m; i<=n; i++){
            if(i%a==0 || i%b==0)    ans++;
        }
        cout << ans << endl;
    }
}   