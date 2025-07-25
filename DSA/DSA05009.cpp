#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, s, a[105], d[10005];
    cin >> t;
    while(t--){
        cin >> n;
        s=0;
        memset(d, 0, sizeof d);
        for(int i=1; i<=n; i++){
            cin >> a[i];
            s+=a[i];
        }
        if(s%2==1){
            cout << "NO\n";
            continue;
        }
        s/=2;
        d[0]=1;
        for(int i=1; i<=n; i++){
            for(int j=s; j>=a[i]; j--){
                if(d[j-a[i]]==1)    d[j]=1;
            }
        }
        if(d[s]==1) cout << "YES\n";
        else cout << "NO\n";
    }
}