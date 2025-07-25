#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int cs7=n/7, ok=1, cs4;
        for(int i=cs7; i>=0; i--){
            if((n-i*7)%4==0){
                cs4=(n-i*7)/4;
                string s(cs4, '4');
                s+=string(i, '7');
                ok=0;
                cout << s << "\n";
                break;
            }
        }
        if(ok)  cout << -1 << "\n";
    }
}