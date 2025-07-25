#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, s, k;
    cin >> t;
    while(t--){
        cin >> s >> k;
        if(s<=9*k){
            int csdau=1;
            s--;
            int cs9=s/9;
            int du, ok=0;
            if(cs9==k-1){
                csdau+=s%9;
            }
            else{
                du=s%9;
                k-=1;
                ok=1;
            }
            cout << csdau;
            for(int i=1; i<=k-1-cs9; i++)   cout << 0;
            if(ok) cout << du;
            while(cs9--)    cout << 9;
        }
        else cout << -1;
        cout << "\n";
    }
}