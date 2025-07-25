#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    string ns;
    while(t--){
        cin >> n >> ns;
        int nam=0;
        for(int i=6; i<ns.size(); i++){
            nam=nam*10+(ns[i]-'0');
        }
        nam+=n;
        for(int i=0; i<6; i++)  cout << ns[i];
        cout << nam << endl;
    }
}