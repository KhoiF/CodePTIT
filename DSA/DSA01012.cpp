#include<bits/stdc++.h>

using namespace std;
int t, n;
void solve(){
    for(int i=0; i<(1<<n); i++){
        int tmp=i^(i>>1);
        string s=bitset<10>(tmp).to_string();
        s.erase(0, 10-n);
        cout << s << " ";
    }
    cout << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        solve();
    }
}
// 000 000
// 001 001
// 010 011
// 011 010
// 100 110
// 101 111
// 110 101
// 111 100