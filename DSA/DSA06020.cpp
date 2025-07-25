#include<bits/stdc++.h>

using namespace std;
int t, n, x, d[1000005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> x;
        memset(d, 0, sizeof d);
        int tmp;
        for(int i=0; i<n; i++){
            cin >> tmp;
            d[tmp]++;
        }
        if(d[x])    cout << 1 << "\n";
        else cout << -1 << "\n";
    }
}