#include<bits/stdc++.h>

using namespace std;
int t, n, a[51], b[51];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b+1, b+n+1);
        int ok=1;
        for(int i=1; i<=n; i++){
            if(a[i]!=b[i] && a[i]!=b[n-i+1]){
                ok=0;
                break;
            }
        }
        if(ok)  cout << "Yes\n";
        else cout << "No\n";
    }
}