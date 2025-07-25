#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n+1], f[n+1];
        f[0]=0;
        for(int i=1; i<=n; i++){
            cin >> a[i];
            f[i]=f[i-1]+a[i];
        }
        int id=-1;
        for(int i=1; i<=n; i++){
            if(f[i]==f[n]-f[i-1]){
                id=i;
                break;
            }
        }
        cout << id << "\n";
    }
}