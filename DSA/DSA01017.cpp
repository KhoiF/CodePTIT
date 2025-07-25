#include<bits/stdc++.h>

using namespace std;
int t, n;
string s;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> s;
        n=s.size();
        bitset<10> b1(s);
        bitset<10> b2(s);
        bitset<10> ans=(b1^(b2>>1));
        string res=ans.to_string();
        res.erase(0, 10-n);
        cout << res << "\n";
    }
}