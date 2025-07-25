#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, a[105];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++)  cin >> a[i];
        int s=0, res=0;
        for(int i=0; i<n; i++){
            if(s+a[i]<0)    s=0;
            else s+=a[i];
            res=max(res, s);
        }
        cout << res << "\n";
    }
}