#include<bits/stdc++.h>

using namespace std;
int t, n, m, s;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> s >> m; 
        int tongan=s*m, ngay_di_cho=s-s/7;
        if(n*ngay_di_cho>=tongan){
            cout << (int)ceil(1.0*tongan/n);
        }
        else cout << -1; 
        cout << "\n";
    }
}